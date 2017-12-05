#pragma once
#include <stdint.h>
#include "../buffer.h"

namespace display
{

namespace font
{


struct Properties
{
	uint8_t format;
	uint8_t width;
	uint8_t height;
	int8_t x_offset;
	int8_t y_offset;
	uint8_t cap_a_hight;
	uint16_t start_cap_a;
	uint16_t start_a;
	uint8_t encoding_start;
	uint8_t encoding_end;
	uint8_t descent_g;
	uint8_t max_ascent;
	uint8_t min_decsent;
	uint8_t x_ascent;
	uint8_t x_descent;
};


template< size_t WIDTH, size_t HEIGHT >
struct Glyph
{
	static const uint8_t width = WIDTH;
	static const uint8_t height = HEIGHT;
	Point start;
	uint8_t dx;
	PixelArray< WIDTH, HEIGHT, uint32_t > data;
};


template< size_t GLYPH_WIDTH, size_t GLYPH_HEIGHT, size_t GLYPH_COUNT >
struct GlypeTable
{
	Properties properties;
	size_t (*char_to_Glyph_id)( char c );
	Glyph< GLYPH_WIDTH, GLYPH_HEIGHT > entries[ GLYPH_COUNT ];
};

constexpr size_t normal_lockup( char /*c*/ )
{
	return 0;
}

} //namespace font

} //namespace display
