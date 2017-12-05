#include "test_utils.h"


std::string to_hex( uint16_t data )
{
	std::stringstream r;
	r << "0x" << std::setw(4) << std::setfill('0') << std::hex << data;
	return r.str();
}



namespace display
{

bool operator==( Point const& p1, Point const& p2 )
{
	return ( ( p1.x == p2.x ) and ( p1.y == p2.y ) );
}

bool operator==( Size const& s1, Size const& s2 )
{
	return ( ( s1.width == s2.width ) and ( s1.height == s2.height ) );
}

bool operator==( Square const& s1, Square const& s2 )
{
	return ( ( s1.top_left == s2.top_left ) and ( s1.size == s2.size ) );
}

}



std::string line( size_t len )
{
	std::string result = "*";
	for( size_t i = 0; i<len; ++i )
	{
		result.append( "--", 2 );
	}

	result.append( "*", 1 );
	return result;
}


std::string to_pix( uint8_t byte )
{
	std::string result;
	if( byte )
	{
		result.append( "[]", 2 );
	}
	else
	{
		result.append( "  ", 2 );
	}

	return result;
}
