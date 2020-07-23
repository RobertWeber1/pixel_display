#pragma once
#include <stddef.h>


namespace pixel_display
{

template<class FontTable, size_t N>
constexpr size_t width(char const (&data)[N])
{
	size_t result = 0;

	for(size_t  i = 0; i<N-1; ++i)
	{
		result += FontTable::glyph_width(data[i]).value;
	}

	return result;
}

template<class FontTable, size_t N>
constexpr size_t height(char const (&data)[N])
{
	int ascent = 0;
	int descent = 0;

	for(size_t  i = 0; i<N-1; ++i)
	{
		ascent = std::max<int>(ascent, FontTable::glyph_ascent(data[i]).value);
		descent = std::min<int>(descent, FontTable::glyph_descent(data[i]).value);
	}

	return ascent - descent;
}

template<class FontTable, size_t N>
constexpr int descent(char const (&data)[N])
{
	int result = 0;

	for(size_t  i = 0; i<N-1; ++i)
	{
		result = std::min<int>(FontTable::glyph_descent(data[i]).value, result);
	}

	return result;
}

template<class FontTable, size_t N>
constexpr int ascent(char const (&data)[N])
{
	int result = 0;

	for(size_t  i = 0; i<N-1; ++i)
	{
		result = std::max<int>(FontTable::glyph_ascent(data[i]).value, result);
	}

	return result;
}


} //namespace pixel_display
