#include "buffer.h"

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>




namespace display
{

bool operator==( Point const& p1, Point const& p2 );

bool operator==( Size const& s1, Size const& s2 );

bool operator==( Square const& s1, Square const& s2 );

}

std::string to_hex( uint16_t data );

std::string line( size_t len );

std::string to_pix( uint8_t byte );

template< size_t WIDTH, size_t HEIGHT, class T >
std::ostream & operator<<( std::ostream & os, display::PixelArray<WIDTH,HEIGHT,T> const& buffer )
{
	os << line( buffer.width() ) << '\n';
	for( size_t h = 0; h < buffer.height(); ++h )
	{
		os << '|';
 		for( size_t w = 0; w < buffer.width(); ++w )
		{
			os << to_pix( buffer.get({w,h},1));
		}

		os << "|\n";

	}
	os << line( buffer.width() ) << '\n';

	return os;
}

template< size_t WIDTH, size_t HEIGHT, class T >
std::string to_string( display::PixelArray<WIDTH,HEIGHT,T> const& buffer )
{
	std::stringstream result;
	result << buffer;
	return result.str();
}