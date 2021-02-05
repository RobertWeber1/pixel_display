#pragma once
#include <pixel_display/type/encoding.h>
#include <pixel_display/type/bit_map.h>

namespace pixel_display
{

namespace font
{

template<int8_t I>
using Constant = type::Constant<int8_t, I>;
using namespace pixel_display::literals;

struct skinny_clock
{

template<int I>
struct Glyphe;

template<int I>
static constexpr int get_encoding(Glyphe<I>)
{
	return I;
}

};


template<>
struct skinny_clock::Glyphe<0x30>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  "
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"  []  "_make_bitmap);
};

template<>
struct skinny_clock::Glyphe<0x31>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []"
		"  [][]"
		"[]  []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"_make_bitmap);
};

template<>
struct skinny_clock::Glyphe<0x32>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  "
		"[]  []"
		"[]  []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"  []  "
		"  []  "
		"[]    "
		"[]    "
		"[][][]"_make_bitmap);
};

template<>
struct skinny_clock::Glyphe<0x33>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  "
		"[]  []"
		"[]  []"
		"    []"
		"    []"
		"    []"
		"    []"
		"  []  "
		"    []"
		"    []"
		"[]  []"
		"[]  []"
		"  []  "_make_bitmap);
};


template<>
struct skinny_clock::Glyphe<0x34>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []"
		"    []"
		"  []  "
		"  []  "
		"  []  "
		"[]    "
		"[]    "
		"[][][]"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"_make_bitmap);
};

template<>
struct skinny_clock::Glyphe<0x35>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][]"
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[][][]"
		"    []"
		"    []"
		"[]  []"
		"[]  []"
		"  []  "_make_bitmap);
};

template<>
struct skinny_clock::Glyphe<0x36>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  "
		"[]  []"
		"[]  []"
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[][]  "
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"  []  "_make_bitmap);
};

template<>
struct skinny_clock::Glyphe<0x37>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][]"
		"[]  []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"_make_bitmap);
};

template<>
struct skinny_clock::Glyphe<0x38>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  "
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"  []  "
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"  []  "_make_bitmap);
};

template<>
struct skinny_clock::Glyphe<0x39>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  "
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"[]  []"
		"  [][]"
		"    []"
		"    []"
		"[]  []"
		"[]  []"
		"  []  "_make_bitmap);
};


template<>
struct skinny_clock::Glyphe<':'>
{
	using next = Constant<4>;
	using width = Constant<1>;
	using height = Constant<8>;
	using x = Constant<2>;
	using y = Constant<2>;
	using bit_map = decltype(
		"[]"
		"[]"
		"  "
		"  "
		"  "
		"  "
		"[]"
		"[]"_make_bitmap);
};



} // namespace pixel_display


} //namespace font

