#pragma once
#include <pixel_display/type/dimensions.h>
#include <pixel_display/type/data.h>
#include <ostream>
#include <iomanip>

namespace std
{
template<size_t N>
std::ostream & operator<<(std::ostream & os, std::array<uint8_t, N> const& in)
{
	os << '{';

	for(auto const& t : in)
	{
		uint8_t mask = 1;
		for(int i=0; i<8; ++i)
		{
			os << ((t&mask)?"##":"  ");
			mask<<=1;
		}
	}

	return os << '}';
}
}


namespace pixel_display
{

namespace type
{

template<class T, class TAG>
std::ostream& operator<<(std::ostream & os, Dimension<T, TAG> const& dim)
{
	return os << dim.value;
}


template<class T1, class T2>
std::ostream& operator<<(std::ostream & os, Pair<T1, T2> const& pair)
{
	return os << '{' << pair.template get<T1>()
	          << ',' << pair.template get<T2>() << '}';
}

template<size_t N>
std::ostream& operator<<(std::ostream & os, Data<N> const& in)
{
	os << '{';

	for(size_t i = 0; i < N; ++i)
	{
		if(i!=0)
		{
			os << ' ';
		}
		os << (uint16_t)in[i];
	}

	return os << '}';
}

//------------------------------------------------------------------------------

template<size_t N>
bool operator==(Data<N> const& lhs, Data<N> const& rhs)
{
	for(size_t i = 0; i<N; ++i)
	{
		if(lhs[i] != rhs[i])
		{
			return false;
		}
	}
	return true;
}

} //namespace type

} //namespace pixel_display

//------------------------------------------------------------------------------



template<class T, T ... Cs>
std::array<uint8_t, (((sizeof...(Cs))>>3) + (((sizeof...(Cs))&0x7) ? 1 : 0))> operator "" _buf ()
{
	std::array<uint8_t, (((sizeof...(Cs))>>3) + (((sizeof...(Cs))&0x7) ? 1 : 0))> buffer = {0};
	char const data[] = {Cs...};


	int byte_count = 0;
	unsigned int bit_count = 0;
	uint8_t result = 0;
	bool written = false;

	for(size_t in = 0; in<sizeof...(Cs); ++in)
	{
		written = false;
		if(data[in] == '1')
		{
			result |= 1<<bit_count;
		}
		++bit_count;

		if(bit_count == 8)
		{
			buffer[byte_count] = result;
			bit_count = 0;
			result = 0;
			++byte_count;
			written = true;
		}
	}
	if(not written)
	{
		buffer[byte_count] = result;
	}

	return buffer;
}

using pixel_display::type::Point;
using pixel_display::type::X;
using pixel_display::type::Y;

struct TestOutput
{
	using line_buf = std::array<uint8_t, 5>;
	line_buf buf[40] = {0};

	template<size_t N>
	void set(std::array<uint8_t, N> const& data, uint16_t byte_index, uint16_t line)
	{
		if(byte_index>=buf[0].size() or line >= 40)
		{
			return;
		}

		for(uint16_t i = 0; i < N; ++i)
		{
			if(byte_index+i >= buf[0].size())
				return;

			buf[line][byte_index+i] |= data[i];
		}
	}

	void next_glyphe(int /*code_point*/)
	{

	}

	template<size_t N>
	void set(std::array<uint8_t, N> const& data, Point const& p)
	{
		set(data, p.get<X>().value, p.get<Y>().value);
	}
	void print_()
	{
		for(int i=39; i>=0; --i)
		{
			std::cout << buf[i] << std::endl;
		}
	}
};
