#pragma once
#include <stdint.h>

namespace pixel_font::encoding
{


struct GlypheInfo
{
	int16_t code_point;
	uint16_t data_index;
	uint8_t width;
	uint8_t height;
	int8_t dx;
	int8_t dy;
	int8_t skip_width;

	constexpr GlypheInfo(
		int code_point,
		uint16_t data_index,
		uint8_t width,
		uint8_t height,
		int8_t dx,
		int8_t dy,
		int8_t skip_width)
	: code_point(static_cast<int16_t>(code_point))
	, data_index(data_index)
	, width(width)
	, height(height)
	, dx(dx)
	, dy(dy)
	, skip_width(skip_width)
	{}
}__attribute__((packed));


template<class Font, class GlypheInfo, class T>
constexpr GlypheInfo make_info(size_t offset)
{
	return {
		Font::template get_encoding(T{}),
		static_cast<uint16_t>(offset),
		T::width::value(),
		T::height::value(),
		T::x::value(),
		T::y::value(),
		T::next::value()
	};
}


} //namespace pixel_font::encoding
