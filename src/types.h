#pragma once
#include <stdint.h>
#include <string.h>

namespace display
{


struct Size
{
	size_t width;
	size_t height;
};


struct Point
{
	size_t x;
	size_t y;
};


struct Square
{
	Point top_left;
	Size  size;

	Square( Point const& p, Size const& s )
	: top_left(p)
	, size( s )
	{}
};


struct DataSource
{
	uint8_t const* data;
	Size           size;
};



} //namespace display
