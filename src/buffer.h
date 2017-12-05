#pragma once
#include "types.h"
#include <string.h>
#include <cmath>


#include <iostream>
#include <sstream>
#include <iomanip>

template< class T >
std::string to_hex_dbg( T data )
{
	std::stringstream r;
	r << "0x" << std::setw(2*sizeof(T)) << std::setfill('0') << std::hex << (uint32_t)data;
	return r.str();
}


namespace display
{


template< size_t S >
constexpr uint8_t shift_factor()
{
	return 0;
}


template<>
constexpr uint8_t shift_factor<1>()
{
	return 3;
}


template<>
constexpr uint8_t shift_factor<2>()
{
	return 4;
}


template<>
constexpr uint8_t shift_factor<4>()
{
	return 5;
}


template<>
constexpr uint8_t shift_factor<8>()
{
	return 6;
}


template< class T >
constexpr T bit_mask( size_t s )
{
	return (s!=0) ? ( (1<<(s-1)) | bit_mask<T>( s - 1 ) ) : 0;
}


template< class T >
constexpr size_t data_size( size_t width, size_t height )
{
	return ( ( (width*height) >> shift_factor<sizeof(T)>() ) +
		     ( (width*height) & bit_mask<T>( shift_factor<sizeof(T)>() ) ? 1 : 0 ) );
}


constexpr size_t saturate( size_t value, size_t max )
{
	return (value > max) ? max : value;
}


constexpr bool is_outside( size_t p, size_t val )
{
	return p > val;
}


constexpr size_t clip( size_t p, size_t size1, size_t size2 )
{
	return ( is_outside( p, size2 ) ? 0 : ( is_outside( p + size1, size2 ) ? ( size2 - p ) : size1 ) );
}


inline Square clip( Square const& input, Size size )
{
	return Square( input.top_left,
	         { clip( input.top_left.x, input.size.width, size.width ),
	           clip( input.top_left.y, input.size.height, size.height ) } );
}


constexpr size_t bit_index( Point p, uint8_t px_width )
{
	return p.x + px_width * p.y;
}


constexpr size_t min( size_t lhs, size_t rhs )
{
	return ( ( lhs < rhs ) ? lhs : rhs );
}




template< size_t WIDTH, size_t HEIGHT, class T = uint32_t >
struct PixelArray
{
	template< size_t W = WIDTH, size_t H = HEIGHT, class Tp = T >
	class iterator
	{
	private:
		PixelArray<W,H,Tp> const& src_;
		Point src_point_;
		Point dst_point_;
		const size_t dst_min_x_;
		const size_t width_;

	public:
		iterator(
			PixelArray<W,H,Tp> const& src,
			size_t width,
			Point const& dst_point,
			Point const& src_point = {0,0} )
		: src_( src )
		, src_point_( src_point )
		, dst_point_( dst_point )
		, dst_min_x_( dst_point.x )
		, width_( width )
		{}


		iterator<W,H,Tp>& operator++()
		{
			if( src_point_.x + width_ < W )
			{
				src_point_.x += width_;
				dst_point_.x += width_;
			}
			else
			{
				src_point_.x = 0;
				dst_point_.x = dst_min_x_;
				if( src_point_.y <= H )
				{
					++src_point_.y;
					++dst_point_.y;
				}
			}
			return *this;
		}


		bool operator==( iterator<W,H,Tp> const& other ) const
		{
			return ( src_point_.x == other.src().x and
			         src_point_.y == other.src().y );
		}


		bool operator!=( iterator<W,H,Tp> const& other ) const
		{
			return not (*this == other);
		}


		Point const& dst() const
		{
			return dst_point_;
		}


		Point const& src() const
		{
			return src_point_;
		}


		Tp value() const
		{
			return src_.get( src_point_, width_ );
		}
	};


	static const size_t pixel_shif_per_T = shift_factor<sizeof(T)>();
	static const size_t pixel_per_T = sizeof(T) << 3;
	T data[ data_size<T>( WIDTH, HEIGHT ) ];


	size_t size() const
	{
		return data_size<T>( WIDTH, HEIGHT);
	}


	size_t width() const
	{
		return WIDTH;
	}


	size_t height() const
	{
		return HEIGHT;
	}


	T get( Point const& p, uint8_t bits = min( pixel_per_T, WIDTH ) ) const
	{
		if( p.x >= WIDTH or p.y >= HEIGHT )
		{
			return T();
		}

		return get_unsave( p, saturate( bits, pixel_per_T ) );
	}


	T get_unsave( Point const& p, uint8_t bits ) const
	{
		size_t bit_index_min = bit_index( p, WIDTH );
		size_t bit_index_max = bit_index( {p.x+bits-1, p.y}, WIDTH );
		size_t T_index_min = bit_index_min >> pixel_shif_per_T;
		size_t T_index_max = bit_index_max >> pixel_shif_per_T;
		size_t bit_offset_in_T = bit_index_min % pixel_per_T;

		T result = data[T_index_min] >> bit_offset_in_T;

		if( T_index_min != T_index_max )
		{
			size_t bit_offset_in_T2 = bit_index_max % pixel_per_T;

			result |=
				( data[T_index_max] & bit_mask<T>( bit_offset_in_T2 + 1 ) ) <<
				( pixel_per_T - bit_offset_in_T);
		}

		return  result & bit_mask<T>(bits);
	}


	T get( size_t y ) const
	{
		if( y >= HEIGHT )
		{
			return T();
		}

		return get_unsave( { 0, y }, WIDTH );
	}


	void set( T value, Point const& pos )
	{
		if( pos.x >= WIDTH or pos.y >= HEIGHT )
		{
			return;
		}

		size_t bit_index_min = bit_index( pos, WIDTH );
		size_t bit_index_max = bit_index( {saturate(pos.x+pixel_per_T, WIDTH)-1, pos.y}, WIDTH );

		size_t T_index_min = bit_index_min >> pixel_shif_per_T;
		size_t T_index_max = bit_index_max >> pixel_shif_per_T;
		size_t mask_low_index = bit_index( {0, pos.y}, WIDTH ) >> pixel_shif_per_T;

		size_t shift_low = bit_index_min % pixel_per_T;
		size_t shift_high = pixel_per_T - shift_low;

		T bit_mask_low = bit_mask<T>(WIDTH) << ( ( pos.y * WIDTH ) % pixel_per_T );
		T bit_mask_high = bit_mask<T>(WIDTH) >> ( pixel_per_T - ( ( pos.y * WIDTH ) % pixel_per_T ) );

		bit_mask_low = ( ( mask_low_index < T_index_min ) ? bit_mask_high : bit_mask_low );

		data[T_index_min] |= ( ( value << shift_low ) & bit_mask_low );

		if( T_index_min != T_index_max )
		{
			data[T_index_max] |= ( ( value >> shift_high ) & bit_mask_high );
		}
	}


	template< class ITER >
	void set( ITER const& it )
	{
		set( it.value(), it.dst() );
	}

	template< class BUFF >
	void copy_from( BUFF const& src, Point const& dst_point )
	{
		for( auto it = src.begin( dst_point ); it != src.end(); ++it )
		{
			set( it );
		}
	}

	iterator<WIDTH, HEIGHT, T> begin( Point const& dst, size_t width = min( WIDTH, pixel_per_T ) ) const
	{
		return iterator<WIDTH, HEIGHT, T>( *this, width, dst );
	}


	iterator<WIDTH, HEIGHT, T> end() const
	{
		return iterator<WIDTH, HEIGHT, T>( *this, 0, {0,0}, {0,HEIGHT} );
	}


	void clear()
	{
		for( size_t i=0; i<size(); ++i )
		{
			data[i] = T();
		}
	}
};


} //namespace display
