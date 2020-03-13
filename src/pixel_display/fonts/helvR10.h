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

struct HelveticaMedium14
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
struct HelveticaMedium14::Glyphe<0>
{
	using next = Constant<10>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []  []  []"
		"              "
		"[]          []"
		"              "
		"[]          []"
		"              "
		"[]          []"
		"              "
		"[]          []"
		"              "
		"[]  []  []  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<32>
{
	using next = Constant<4>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<33>
{
	using next = Constant<4>;
	using width = Constant<1>;
	using height = Constant<11>;
	using x = Constant<2>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"  "
		"[]"
		"[]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<34>
{
	using next = Constant<5>;
	using width = Constant<3>;
	using height = Constant<3>;
	using x = Constant<1>;
	using y = Constant<8>;
	using bit_map = decltype(
		"[]  []"
		"[]  []"
		"[]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<35>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []  []  "
		"      []  []  "
		"      []  []  "
		"  [][][][][][]"
		"    []  []    "
		"    []  []    "
		"[][][][][][]  "
		"  []  []      "
		"  []  []      "
		"  []  []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<36>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"      []      "
		"  [][][][][]  "
		"[]    []    []"
		"[]    []    []"
		"[]    []      "
		"  []  []      "
		"    [][][]    "
		"      []  []  "
		"      []    []"
		"[]    []    []"
		"[]    []    []"
		"  [][][][][]  "
		"      []      "
		"      []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<37>
{
	using next = Constant<12>;
	using width = Constant<11>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][]        []    "
		"[]      []    []      "
		"[]      []    []      "
		"  [][][]    []        "
		"            []        "
		"          []          "
		"        []            "
		"        []    [][][]  "
		"      []    []      []"
		"      []    []      []"
		"    []        [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<38>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]        "
		"  []    []      "
		"  []    []      "
		"    [][]        "
		"    []          "
		"  []  []    []  "
		"[]      []  []  "
		"[]        []    "
		"[]      []  []  "
		"  [][][]      []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<39>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<3>;
	using x = Constant<1>;
	using y = Constant<8>;
	using bit_map = decltype(
		"[]"
		"[]"
		"[]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<40>
{
	using next = Constant<5>;
	using width = Constant<3>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    []"
		"  []  "
		"  []  "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"  []  "
		"  []  "
		"    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<41>
{
	using next = Constant<5>;
	using width = Constant<3>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]    "
		"  []  "
		"  []  "
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"    []"
		"  []  "
		"  []  "
		"[]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<42>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<5>;
	using x = Constant<1>;
	using y = Constant<6>;
	using bit_map = decltype(
		"    []    "
		"[]  []  []"
		"  [][][]  "
		"[]  []  []"
		"    []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<43>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<7>;
	using x = Constant<1>;
	using y = Constant<1>;
	using bit_map = decltype(
		"      []      "
		"      []      "
		"      []      "
		"[][][][][][][]"
		"      []      "
		"      []      "
		"      []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<44>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<4>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  []"
		"  []"
		"  []"
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<45>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<46>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<2>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]"
		"[]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<47>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []"
		"      []"
		"    []  "
		"    []  "
		"    []  "
		"  []    "
		"  []    "
		"  []    "
		"[]      "
		"[]      "
		"[]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<48>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<49>
{
	using next = Constant<8>;
	using width = Constant<3>;
	using height = Constant<11>;
	using x = Constant<2>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []"
		"[][][]"
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
struct HelveticaMedium14::Glyphe<50>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[]        []"
		"[]        []"
		"          []"
		"        []  "
		"      []    "
		"    []      "
		"  []        "
		"[]          "
		"[]          "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<51>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[]        []"
		"[]        []"
		"          []"
		"          []"
		"    [][][]  "
		"          []"
		"          []"
		"[]        []"
		"[]        []"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<52>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []  "
		"        [][]  "
		"      []  []  "
		"    []    []  "
		"  []      []  "
		"[]        []  "
		"[]        []  "
		"[][][][][][][]"
		"          []  "
		"          []  "
		"          []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<53>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][]"
		"[]          "
		"[]          "
		"[]          "
		"[][][][][]  "
		"          []"
		"          []"
		"          []"
		"[]        []"
		"[]        []"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<54>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[]        []"
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]      []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<55>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][]"
		"          []"
		"        []  "
		"        []  "
		"      []    "
		"      []    "
		"    []      "
		"    []      "
		"  []        "
		"  []        "
		"  []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<56>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"  [][][][]  "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<57>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"  [][][][][]"
		"          []"
		"          []"
		"[]        []"
		"[]        []"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<58>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
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

template<>
struct HelveticaMedium14::Glyphe<59>
{
	using next = Constant<4>;
	using width = Constant<2>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  []"
		"  []"
		"    "
		"    "
		"    "
		"    "
		"  []"
		"  []"
		"  []"
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<60>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<5>;
	using x = Constant<1>;
	using y = Constant<2>;
	using bit_map = decltype(
		"        [][]"
		"    [][]    "
		"[][]        "
		"    [][]    "
		"        [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<61>
{
	using next = Constant<9>;
	using width = Constant<6>;
	using height = Constant<3>;
	using x = Constant<1>;
	using y = Constant<3>;
	using bit_map = decltype(
		"[][][][][][]"
		"            "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<62>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<5>;
	using x = Constant<1>;
	using y = Constant<2>;
	using bit_map = decltype(
		"[][]        "
		"    [][]    "
		"        [][]"
		"    [][]    "
		"[][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<63>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]    "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"          []"
		"        []  "
		"      []    "
		"    []      "
		"            "
		"    []      "
		"    []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<64>
{
	using next = Constant<13>;
	using width = Constant<11>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<-1>;
	using bit_map = decltype(
		"        [][][][]      "
		"    [][]        [][]  "
		"  []                []"
		"  []      [][]  []  []"
		"[]      []    []    []"
		"[]    []      []    []"
		"[]    []      []    []"
		"[]    []    [][]  []  "
		"[]      [][]  [][]    "
		"  []                  "
		"  [][]          []    "
		"      [][][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<65>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<66>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][]  "
		"[]        [][]"
		"[]          []"
		"[]          []"
		"[]        []  "
		"[][][][][]    "
		"[]        []  "
		"[]          []"
		"[]          []"
		"[]        [][]"
		"[][][][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<67>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][]    "
		"  [][]      [][]"
		"  []          []"
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"  []          []"
		"  [][]      [][]"
		"      [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<68>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][]      "
		"[]        [][]  "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[]        [][]  "
		"[][][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<69>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<70>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[]            "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<71>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][]    "
		"  [][]        [][]"
		"  []            []"
		"[]                "
		"[]                "
		"[]        [][][][]"
		"[]              []"
		"[]              []"
		"  []            []"
		"  [][]      [][][]"
		"      [][][]    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<72>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[][][][][][][][]"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<73>
{
	using next = Constant<4>;
	using width = Constant<1>;
	using height = Constant<11>;
	using x = Constant<2>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<74>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []"
		"          []"
		"          []"
		"          []"
		"          []"
		"          []"
		"          []"
		"          []"
		"[]        []"
		"[]        []"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<75>
{
	using next = Constant<9>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]          []  "
		"[]        []    "
		"[]      []      "
		"[]    []        "
		"[]  []          "
		"[][][]          "
		"[]    []        "
		"[]      []      "
		"[]        []    "
		"[]          []  "
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<76>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<2>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<77>
{
	using next = Constant<12>;
	using width = Constant<11>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]                  []"
		"[][]              [][]"
		"[][]              [][]"
		"[]  []          []  []"
		"[]  []          []  []"
		"[]    []      []    []"
		"[]    []      []    []"
		"[]      []  []      []"
		"[]      []  []      []"
		"[]        []        []"
		"[]        []        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<78>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]          []"
		"[]  []        []"
		"[]  []        []"
		"[]    []      []"
		"[]    []      []"
		"[]      []    []"
		"[]      []    []"
		"[]        []  []"
		"[]        []  []"
		"[]          [][]"
		"[]          [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<79>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<80>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][]  "
		"[]        [][]"
		"[]          []"
		"[]          []"
		"[]        [][]"
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[]            "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<81>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]      []      []"
		"[]        []    []"
		"  []        [][]  "
		"  [][]      [][]  "
		"      [][][]    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<82>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][][]  "
		"[]          [][]"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[][][][][][]    "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<83>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][]    "
		"[][]      [][]"
		"[]          []"
		"[]            "
		"  [][]        "
		"      [][]    "
		"          [][]"
		"            []"
		"[]          []"
		"[][]      [][]"
		"    [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<84>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][][][][]"
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<85>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<86>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]              []"
		"[]              []"
		"  []          []  "
		"  []          []  "
		"  [][]      [][]  "
		"    []      []    "
		"    []      []    "
		"      []  []      "
		"      []  []      "
		"        []        "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<87>
{
	using next = Constant<13>;
	using width = Constant<13>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]          []          []"
		"[]          []          []"
		"[]        []  []        []"
		"  []      []  []      []  "
		"  []      []  []      []  "
		"  []      []  []      []  "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"      []          []      "
		"      []          []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<88>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]              []"
		"  []          []  "
		"    []      []    "
		"      []  []      "
		"        []        "
		"        []        "
		"      []  []      "
		"    []      []    "
		"  []          []  "
		"  []          []  "
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<89>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]              []"
		"[][]          [][]"
		"  []          []  "
		"    []      []    "
		"    []      []    "
		"      []  []      "
		"      [][][]      "
		"        []        "
		"        []        "
		"        []        "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<90>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][][]"
		"            []"
		"          []  "
		"        []    "
		"      [][]    "
		"      []      "
		"    []        "
		"  [][]        "
		"  []          "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<91>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][][]"
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[]    "
		"[][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<92>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]      "
		"[]      "
		"  []    "
		"  []    "
		"  []    "
		"    []  "
		"    []  "
		"    []  "
		"      []"
		"      []"
		"      []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<93>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][][]"
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
		"    []"
		"    []"
		"[][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<94>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<5>;
	using x = Constant<1>;
	using y = Constant<6>;
	using bit_map = decltype(
		"    []    "
		"  []  []  "
		"  []  []  "
		"[]      []"
		"[]      []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<95>
{
	using next = Constant<8>;
	using width = Constant<8>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<96>
{
	using next = Constant<5>;
	using width = Constant<2>;
	using height = Constant<2>;
	using x = Constant<1>;
	using y = Constant<9>;
	using bit_map = decltype(
		"[]  "
		"  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<97>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<98>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"[]  [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<99>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"[]          "
		"[]          "
		"[]          "
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<100>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []"
		"          []"
		"          []"
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<101>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<102>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]"
		"  []    "
		"  []    "
		"[][][]  "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<103>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"          []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<104>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<105>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]"
		"[]"
		"  "
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<106>
{
	using next = Constant<3>;
	using width = Constant<3>;
	using height = Constant<14>;
	using x = Constant<-1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    []"
		"    []"
		"      "
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
		"[][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<107>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]      []  "
		"[]    []    "
		"[]  []      "
		"[][]        "
		"[]  []      "
		"[]    []    "
		"[]      []  "
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<108>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<109>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  [][]    [][]  "
		"[][]    [][]    []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<110>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<111>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<112>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"[]  [][][]  "
		"[]          "
		"[]          "
		"[]          "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<113>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"          []"
		"          []"
		"          []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<114>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  [][]"
		"[][]    "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<115>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][]  "
		"[]      []"
		"[][]      "
		"  [][][]  "
		"      [][]"
		"        []"
		"[]      []"
		"  [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<116>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []    "
		"  []    "
		"[][][]  "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"    [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<117>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<118>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<8>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]          []"
		"[]          []"
		"  []      []  "
		"  []      []  "
		"  []      []  "
		"    []  []    "
		"    []  []    "
		"      []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<119>
{
	using next = Constant<10>;
	using width = Constant<9>;
	using height = Constant<8>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"  []    []    []  "
		"  []    []    []  "
		"  []  []  []  []  "
		"    []      []    "
		"    []      []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<120>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<8>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]      [][]"
		"  []      []  "
		"    []  []    "
		"      []      "
		"      []      "
		"    []  []    "
		"  []      []  "
		"[][]      [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<121>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]          []"
		"[][]        []"
		"  []      []  "
		"  []      []  "
		"    []    []  "
		"    []  []    "
		"      [][]    "
		"      []      "
		"      []      "
		"    [][]      "
		"  [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<122>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][]"
		"          []"
		"        []  "
		"      []    "
		"    []      "
		"  []        "
		"[]          "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<123>
{
	using next = Constant<5>;
	using width = Constant<5>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"      [][]"
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"  []      "
		"[]        "
		"  []      "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"      [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<124>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<125>
{
	using next = Constant<5>;
	using width = Constant<5>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][]      "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"      []  "
		"        []"
		"      []  "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"[][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<126>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<3>;
	using x = Constant<1>;
	using y = Constant<3>;
	using bit_map = decltype(
		"  [][]    []"
		"[]  [][]  []"
		"[]    [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<160>
{
	using next = Constant<4>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<161>
{
	using next = Constant<4>;
	using width = Constant<1>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]"
		"[]"
		"  "
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<162>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<-1>;
	using bit_map = decltype(
		"          []"
		"  [][][][]  "
		"[][]    [][]"
		"[]    []    "
		"[]    []    "
		"[]  []      "
		"[]  []    []"
		"[][]    [][]"
		"  [][][][]  "
		"[]          "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<163>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][]    "
		"  []      []  "
		"  []          "
		"  []          "
		"[][][][][]    "
		"    []        "
		"    []        "
		"    []        "
		"  []          "
		"  [][]      []"
		"[][]  [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<164>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<6>;
	using x = Constant<1>;
	using y = Constant<2>;
	using bit_map = decltype(
		"[]        []"
		"  [][][][]  "
		"  []    []  "
		"  []    []  "
		"  [][][][]  "
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<165>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]          []"
		"[]          []"
		"[]          []"
		"  []      []  "
		"  []      []  "
		"    []  []    "
		"[][][][][][][]"
		"      []      "
		"[][][][][][][]"
		"      []      "
		"      []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<166>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"  "
		"  "
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<167>
{
	using next = Constant<8>;
	using width = Constant<5>;
	using height = Constant<14>;
	using x = Constant<2>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][]  "
		"[][]  [][]"
		"[]      []"
		"[][]      "
		"  [][][]  "
		"[]    [][]"
		"[]      []"
		"[]      []"
		"[][]    []"
		"  [][][]  "
		"      [][]"
		"[]      []"
		"[][]  [][]"
		"  [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<168>
{
	using next = Constant<5>;
	using width = Constant<5>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<9>;
	using bit_map = decltype(
		"[][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<169>
{
	using next = Constant<12>;
	using width = Constant<10>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][]      "
		"  [][]        [][]  "
		"  []  [][][]    []  "
		"[]  []      []  [][]"
		"[]  []      []    []"
		"[]  []            []"
		"[]  []      []    []"
		"[]    [][][]      []"
		"  []            []  "
		"  [][]        [][]  "
		"      [][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<170>
{
	using next = Constant<6>;
	using width = Constant<4>;
	using height = Constant<7>;
	using x = Constant<1>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][][]  "
		"      []"
		"  [][][]"
		"[]    []"
		"[][]  []"
		"        "
		"[][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<171>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<5>;
	using x = Constant<1>;
	using y = Constant<2>;
	using bit_map = decltype(
		"    []    []"
		"  []    []  "
		"[]    []    "
		"  []    []  "
		"    []    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<172>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<4>;
	using x = Constant<1>;
	using y = Constant<2>;
	using bit_map = decltype(
		"[][][][][][][]"
		"            []"
		"            []"
		"            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<173>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<174>
{
	using next = Constant<12>;
	using width = Constant<10>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][]      "
		"  [][]        [][]  "
		"  []  [][][]    []  "
		"[]    []    []    []"
		"[]    []    []    []"
		"[]    [][][]      []"
		"[]    []    []    []"
		"[]    []    []    []"
		"  []            []  "
		"  [][]        [][]  "
		"      [][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<175>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<9>;
	using bit_map = decltype(
		"[][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<176>
{
	using next = Constant<6>;
	using width = Constant<4>;
	using height = Constant<4>;
	using x = Constant<1>;
	using y = Constant<7>;
	using bit_map = decltype(
		"  [][]  "
		"[]    []"
		"[]    []"
		"  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<177>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<9>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []      "
		"      []      "
		"      []      "
		"[][][][][][][]"
		"      []      "
		"      []      "
		"      []      "
		"              "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<178>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<6>;
	using x = Constant<0>;
	using y = Constant<5>;
	using bit_map = decltype(
		"  [][]  "
		"[]    []"
		"      []"
		"    []  "
		"  []    "
		"[][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<179>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<6>;
	using x = Constant<0>;
	using y = Constant<5>;
	using bit_map = decltype(
		"  [][]  "
		"[]    []"
		"    []  "
		"      []"
		"[]    []"
		"  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<180>
{
	using next = Constant<5>;
	using width = Constant<2>;
	using height = Constant<2>;
	using x = Constant<2>;
	using y = Constant<9>;
	using bit_map = decltype(
		"  []"
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<181>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"[]  [][]  []"
		"[]          "
		"[]          "
		"[]          "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<182>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    [][][][][]"
		"  [][][]  []  "
		"[][][][]  []  "
		"[][][][]  []  "
		"[][][][]  []  "
		"  [][][]  []  "
		"    [][]  []  "
		"      []  []  "
		"      []  []  "
		"      []  []  "
		"      []  []  "
		"      []  []  "
		"      []  []  "
		"      []  []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<183>
{
	using next = Constant<4>;
	using width = Constant<2>;
	using height = Constant<1>;
	using x = Constant<1>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<184>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<3>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    []  "
		"[]    []"
		"  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<185>
{
	using next = Constant<5>;
	using width = Constant<2>;
	using height = Constant<6>;
	using x = Constant<1>;
	using y = Constant<5>;
	using bit_map = decltype(
		"  []"
		"[][]"
		"  []"
		"  []"
		"  []"
		"  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<186>
{
	using next = Constant<6>;
	using width = Constant<4>;
	using height = Constant<7>;
	using x = Constant<1>;
	using y = Constant<4>;
	using bit_map = decltype(
		"  [][]  "
		"[]    []"
		"[]    []"
		"[]    []"
		"  [][]  "
		"        "
		"[][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<187>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<5>;
	using x = Constant<1>;
	using y = Constant<2>;
	using bit_map = decltype(
		"[]    []    "
		"  []    []  "
		"    []    []"
		"  []    []  "
		"[]    []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<188>
{
	using next = Constant<12>;
	using width = Constant<10>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []        []      "
		"[][]        []      "
		"  []      []        "
		"  []      []        "
		"  []    []          "
		"  []    []      []  "
		"        []    [][]  "
		"      []    []  []  "
		"      []  []    []  "
		"    []    [][][][][]"
		"    []          []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<189>
{
	using next = Constant<12>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []        []    "
		"[][]        []    "
		"  []      []      "
		"  []      []      "
		"  []    []        "
		"  []    []  [][]  "
		"      []  []    []"
		"      []        []"
		"      []      []  "
		"    []      []    "
		"    []    [][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<190>
{
	using next = Constant<12>;
	using width = Constant<11>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]        []      "
		"[]    []      []      "
		"    []      []        "
		"      []    []        "
		"[]    []  []          "
		"  [][]    []      []  "
		"          []    [][]  "
		"        []    []  []  "
		"        []  []    []  "
		"      []    [][][][][]"
		"      []          []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<191>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"      []    "
		"      []    "
		"            "
		"      []    "
		"    []      "
		"  []        "
		"[]          "
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<192>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []          "
		"        []        "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<193>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []      "
		"        []        "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<194>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]      "
		"      []    []    "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<195>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]  []    "
		"    []  [][]      "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<196>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  [][]    "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<197>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]      "
		"      []    []    "
		"      []    []    "
		"        [][]      "
		"        [][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<198>
{
	using next = Constant<14>;
	using width = Constant<12>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][][][][][][]"
		"      []    []          "
		"      []    []          "
		"    []      []          "
		"    []      []          "
		"    []      [][][][][][]"
		"  [][][][][][]          "
		"  []        []          "
		"  []        []          "
		"[]          []          "
		"[]          [][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<199>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"      [][][]    "
		"  [][]      [][]"
		"  []          []"
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"  []          []"
		"  [][]      [][]"
		"      [][][]    "
		"        []      "
		"    []    []    "
		"      [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<200>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []        "
		"      []      "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<201>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []    "
		"      []      "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<202>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]    "
		"    []    []  "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<203>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]  [][]  "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<204>
{
	using next = Constant<4>;
	using width = Constant<2>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  "
		"  []"
		"    "
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<205>
{
	using next = Constant<4>;
	using width = Constant<2>;
	using height = Constant<14>;
	using x = Constant<2>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []"
		"[]  "
		"    "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<206>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]  "
		"[]    []"
		"        "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<207>
{
	using next = Constant<4>;
	using width = Constant<5>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]  [][]"
		"          "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<208>
{
	using next = Constant<10>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][][]      "
		"  []        [][]  "
		"  []          []  "
		"  []            []"
		"  []            []"
		"[][][][]        []"
		"  []            []"
		"  []            []"
		"  []          []  "
		"  []        [][]  "
		"  [][][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<209>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]  []  "
		"    []  [][]    "
		"                "
		"[][]          []"
		"[]  []        []"
		"[]  []        []"
		"[]    []      []"
		"[]    []      []"
		"[]      []    []"
		"[]      []    []"
		"[]        []  []"
		"[]        []  []"
		"[]          [][]"
		"[]          [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<210>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []          "
		"        []        "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<211>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []      "
		"        []        "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<212>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]      "
		"      []    []    "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<213>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]  []    "
		"    []  [][]      "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<214>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]    [][]  "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<215>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<7>;
	using x = Constant<1>;
	using y = Constant<1>;
	using bit_map = decltype(
		"[]          []"
		"  []      []  "
		"    []  []    "
		"      []      "
		"    []  []    "
		"  []      []  "
		"[]          []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<216>
{
	using next = Constant<11>;
	using width = Constant<11>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][][]      []"
		"    [][]      [][][]  "
		"    []          []    "
		"  []          []  []  "
		"  []        []    []  "
		"  []      []      []  "
		"  []    []        []  "
		"  []  []          []  "
		"    []          []    "
		"  [][][]      [][]    "
		"[]      [][][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<217>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []        "
		"        []      "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<218>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []    "
		"        []      "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<219>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]      "
		"    []    []    "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<220>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]    [][]  "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<221>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []      "
		"        []        "
		"                  "
		"[]              []"
		"[][]          [][]"
		"  []          []  "
		"    []      []    "
		"    []      []    "
		"      []  []      "
		"      [][][]      "
		"        []        "
		"        []        "
		"        []        "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<222>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]        [][]"
		"[]          []"
		"[]          []"
		"[]        [][]"
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<223>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][]  "
		"[]      []"
		"[]      []"
		"[]      []"
		"[]  [][]  "
		"[]    []  "
		"[]      []"
		"[]      []"
		"[]      []"
		"[]      []"
		"[]  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<224>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []        "
		"      []      "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<225>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []      "
		"    []        "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<226>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]      "
		"  []    []    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<227>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  []  "
		"  []  [][]    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<228>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []    []    "
		"  []    []    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<229>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]      "
		"  []    []    "
		"    [][]      "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<230>
{
	using next = Constant<13>;
	using width = Constant<11>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  [][][][]  "
		"[][]      [][]    [][]"
		"          []        []"
		"  [][][][][][][][][][]"
		"[][]      []          "
		"[]        []          "
		"[][]    [][][]    [][]"
		"  [][][][]  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<231>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"[]          "
		"[]          "
		"[]          "
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "
		"      []    "
		"  []    []  "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<232>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      "
		"      []    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<233>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<234>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]    "
		"  []    []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<235>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []    []  "
		"  []    []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<236>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  "
		"  []"
		"    "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<237>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []"
		"[]  "
		"    "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<238>
{
	using next = Constant<3>;
	using width = Constant<4>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]  "
		"[]    []"
		"        "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<239>
{
	using next = Constant<3>;
	using width = Constant<3>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []"
		"[]  []"
		"      "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<240>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]  [][]  "
		"  [][][]    "
		"[]    []    "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<241>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]  []  "
		"[]  [][]    "
		"            "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<242>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      "
		"      []    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<243>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<244>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]    "
		"  []    []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<245>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]  []  "
		"[]  [][]    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<246>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []    []  "
		"  []    []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<247>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<7>;
	using x = Constant<1>;
	using y = Constant<1>;
	using bit_map = decltype(
		"      []      "
		"      []      "
		"              "
		"[][][][][][][]"
		"              "
		"      []      "
		"      []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<248>
{
	using next = Constant<8>;
	using width = Constant<8>;
	using height = Constant<8>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][][]  []"
		"  [][]      []  "
		"  []      [][]  "
		"  []    []  []  "
		"  []  []    []  "
		"  [][]      []  "
		"  []      [][]  "
		"[]  [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<249>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      "
		"      []    "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<250>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<251>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]    "
		"  []    []  "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<252>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []    []  "
		"  []    []  "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<253>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"        []    "
		"      []      "
		"              "
		"[]          []"
		"[][]        []"
		"  []      []  "
		"  []      []  "
		"    []    []  "
		"    []  []    "
		"      [][]    "
		"      []      "
		"      []      "
		"    [][]      "
		"  [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<254>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"[]  [][][]  "
		"[]          "
		"[]          "
		"[]          "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<255>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    []    []  "
		"    []    []  "
		"              "
		"[]          []"
		"[][]        []"
		"  []      []  "
		"  []      []  "
		"    []    []  "
		"    []  []    "
		"      [][]    "
		"      []      "
		"      []      "
		"    [][]      "
		"  [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<256>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][]    "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<257>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<258>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      []    "
		"      [][][]      "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<259>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []      []  "
		"    [][][]    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<260>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"        []        "
		"      []          "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<261>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"
		"      []      "
		"    []        "
		"    [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<262>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []    "
		"        []      "
		"                "
		"      [][][]    "
		"  [][]      [][]"
		"  []          []"
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"  []          []"
		"  [][]      [][]"
		"      [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<263>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]          "
		"[]          "
		"[]          "
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<264>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []      "
		"      []  []    "
		"                "
		"      [][][]    "
		"  [][]      [][]"
		"  []          []"
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"  []          []"
		"  [][]      [][]"
		"      [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<265>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      "
		"  []  []    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]          "
		"[]          "
		"[]          "
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<266>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]      "
		"                "
		"      [][][]    "
		"  [][]      [][]"
		"  []          []"
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"  []          []"
		"  [][]      [][]"
		"      [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<267>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]          "
		"[]          "
		"[]          "
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<268>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []  []    "
		"        []      "
		"                "
		"      [][][]    "
		"  [][]      [][]"
		"  []          []"
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"  []          []"
		"  [][]      [][]"
		"      [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<269>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  []    "
		"    []      "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]          "
		"[]          "
		"[]          "
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<270>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []  []      "
		"      []        "
		"                "
		"[][][][][]      "
		"[]        [][]  "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[]        [][]  "
		"[][][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<271>
{
	using next = Constant<11>;
	using width = Constant<10>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []    [][]"
		"          []      []"
		"          []    []  "
		"  [][][]  []        "
		"[][]    [][]        "
		"[]        []        "
		"[]        []        "
		"[]        []        "
		"[]        []        "
		"[][]    [][]        "
		"  [][][]  []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<272>
{
	using next = Constant<10>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][][]      "
		"  []        [][]  "
		"  []          []  "
		"  []            []"
		"  []            []"
		"[][][][]        []"
		"  []            []"
		"  []            []"
		"  []          []  "
		"  []        [][]  "
		"  [][][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<273>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []"
		"    [][][][]"
		"          []"
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<274>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]    "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<275>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<276>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []      []  "
		"    [][][]    "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<277>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []      []"
		"    [][][]  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<278>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]      "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<279>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<280>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"
		"      []      "
		"    []        "
		"    [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<281>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "
		"    []      "
		"  []        "
		"  [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<282>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []  []    "
		"      []      "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<283>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []  []  "
		"      []    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<284>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []        "
		"      []  []      "
		"                  "
		"      [][][][]    "
		"  [][]        [][]"
		"  []            []"
		"[]                "
		"[]                "
		"[]        [][][][]"
		"[]              []"
		"[]              []"
		"  []            []"
		"  [][]      [][][]"
		"      [][][]    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<285>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"      []    "
		"    []  []  "
		"            "
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"          []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<286>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      []    "
		"      [][][]      "
		"                  "
		"      [][][][]    "
		"  [][]        [][]"
		"  []            []"
		"[]                "
		"[]                "
		"[]        [][][][]"
		"[]              []"
		"[]              []"
		"  []            []"
		"  [][]      [][][]"
		"      [][][]    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<287>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  []      []"
		"    [][][]  "
		"            "
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"          []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<288>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]      "
		"                  "
		"      [][][][]    "
		"  [][]        [][]"
		"  []            []"
		"[]                "
		"[]                "
		"[]        [][][][]"
		"[]              []"
		"[]              []"
		"  []            []"
		"  [][]      [][][]"
		"      [][][]    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<289>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    [][]    "
		"            "
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"          []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<290>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"      [][][][]    "
		"  [][]        [][]"
		"  []            []"
		"[]                "
		"[]                "
		"[]        [][][][]"
		"[]              []"
		"[]              []"
		"  []            []"
		"  [][]      [][][]"
		"      [][][]    []"
		"                  "
		"          []      "
		"          []      "
		"          []      "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<291>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"    [][]    "
		"            "
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"          []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<292>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []      "
		"      []  []    "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[][][][][][][][]"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<293>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []        "
		"[]  []      "
		"            "
		"[]          "
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<294>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]            []"
		"[]            []"
		"[][][][][][][][]"
		"[]            []"
		"[]            []"
		"[][][][][][][][]"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<295>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]          "
		"[][][][]    "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<296>
{
	using next = Constant<4>;
	using width = Constant<5>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]  []"
		"[]  [][]  "
		"          "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<297>
{
	using next = Constant<3>;
	using width = Constant<5>;
	using height = Constant<11>;
	using x = Constant<-1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]  []"
		"[]  [][]  "
		"          "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<298>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][]"
		"        "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<299>
{
	using next = Constant<3>;
	using width = Constant<4>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][]"
		"        "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<300>
{
	using next = Constant<4>;
	using width = Constant<5>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]      []"
		"  [][][]  "
		"          "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<301>
{
	using next = Constant<3>;
	using width = Constant<5>;
	using height = Constant<11>;
	using x = Constant<-1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]      []"
		"  [][][]  "
		"          "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<302>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"[]    "
		"[][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<303>
{
	using next = Constant<3>;
	using width = Constant<3>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  []  "
		"  []  "
		"      "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"[]    "
		"[][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<304>
{
	using next = Constant<4>;
	using width = Constant<2>;
	using height = Constant<13>;
	using x = Constant<2>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]"
		"    "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<305>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<306>
{
	using next = Constant<11>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<2>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]  []        []"
		"[]  []        []"
		"[]    [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<307>
{
	using next = Constant<6>;
	using width = Constant<4>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]    []"
		"[]    []"
		"        "
		"[]    []"
		"[]    []"
		"[]    []"
		"[]    []"
		"[]    []"
		"[]    []"
		"[]    []"
		"[]    []"
		"      []"
		"      []"
		"  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<308>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []  "
		"      []  []"
		"            "
		"          []"
		"          []"
		"          []"
		"          []"
		"          []"
		"          []"
		"          []"
		"          []"
		"[]        []"
		"[]        []"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<309>
{
	using next = Constant<3>;
	using width = Constant<4>;
	using height = Constant<14>;
	using x = Constant<-1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    []  "
		"  []  []"
		"        "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"[][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<310>
{
	using next = Constant<9>;
	using width = Constant<8>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"[]          []  "
		"[]        []    "
		"[]      []      "
		"[]    []        "
		"[]  []          "
		"[][][]          "
		"[]    []        "
		"[]      []      "
		"[]        []    "
		"[]          []  "
		"[]            []"
		"                "
		"      []        "
		"      []        "
		"      []        "
		"    []          "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<311>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]      []  "
		"[]    []    "
		"[]  []      "
		"[][]        "
		"[]  []      "
		"[]    []    "
		"[]      []  "
		"[]        []"
		"            "
		"    []      "
		"    []      "
		"    []      "
		"  []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<312>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]      []  "
		"[]    []    "
		"[]  []      "
		"[][]        "
		"[]  []      "
		"[]    []    "
		"[]      []  "
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<313>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<2>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      "
		"  []        "
		"            "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<314>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []"
		"[]  "
		"    "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<315>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<16>;
	using x = Constant<2>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[][][][][][]"
		"            "
		"    []      "
		"    []      "
		"    []      "
		"  []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<316>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<16>;
	using x = Constant<0>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"
		"  []"
		"    "
		"  []"
		"  []"
		"  []"
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<317>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<2>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]            [][]"
		"[]              []"
		"[]            []  "
		"[]                "
		"[]                "
		"[]                "
		"[]                "
		"[]                "
		"[]                "
		"[]                "
		"[][][][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<318>
{
	using next = Constant<6>;
	using width = Constant<5>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]    [][]"
		"[]      []"
		"[]    []  "
		"[]        "
		"[]        "
		"[]        "
		"[]        "
		"[]        "
		"[]        "
		"[]        "
		"[]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<319>
{
	using next = Constant<12>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<2>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]                "
		"[]                "
		"[]                "
		"[]                "
		"[]                "
		"[]                "
		"[]            [][]"
		"[]                "
		"[]                "
		"[]                "
		"[][][][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<320>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]        "
		"[]        "
		"[]        "
		"[]        "
		"[]        "
		"[]        "
		"[]    [][]"
		"[]        "
		"[]        "
		"[]        "
		"[]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<321>
{
	using next = Constant<8>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<-1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []          "
		"    []          "
		"    []          "
		"    []  []      "
		"    [][]        "
		"  [][]          "
		"[]  []          "
		"    []          "
		"    []          "
		"    []          "
		"    [][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<322>
{
	using next = Constant<3>;
	using width = Constant<3>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  [][]"
		"[][]  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<323>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []      "
		"      []        "
		"                "
		"[][]          []"
		"[]  []        []"
		"[]  []        []"
		"[]    []      []"
		"[]    []      []"
		"[]      []    []"
		"[]      []    []"
		"[]        []  []"
		"[]        []  []"
		"[]          [][]"
		"[]          [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<324>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<325>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"[][]          []"
		"[]  []        []"
		"[]  []        []"
		"[]    []      []"
		"[]    []      []"
		"[]      []    []"
		"[]      []    []"
		"[]        []  []"
		"[]        []  []"
		"[]          [][]"
		"[]          [][]"
		"                "
		"        []      "
		"        []      "
		"        []      "
		"      []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<326>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"            "
		"      []    "
		"      []    "
		"      []    "
		"    []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<327>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []  []      "
		"      []        "
		"                "
		"[][]          []"
		"[]  []        []"
		"[]  []        []"
		"[]    []      []"
		"[]    []      []"
		"[]      []    []"
		"[]      []    []"
		"[]        []  []"
		"[]        []  []"
		"[]          [][]"
		"[]          [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<328>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  []    "
		"    []      "
		"            "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<329>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]              "
		"  []              "
		"[]                "
		"      []  [][][]  "
		"      [][]    [][]"
		"      []        []"
		"      []        []"
		"      []        []"
		"      []        []"
		"      []        []"
		"      []        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<330>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][]          []"
		"[]  []        []"
		"[]  []        []"
		"[]    []      []"
		"[]    []      []"
		"[]      []    []"
		"[]      []    []"
		"[]        []  []"
		"[]        []  []"
		"[]          [][]"
		"[]          [][]"
		"              []"
		"              []"
		"          [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<331>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"          []"
		"          []"
		"      [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<332>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][]    "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<333>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<334>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      []    "
		"      [][][]      "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<335>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []      []"
		"    [][][]  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<336>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []  []  "
		"        []  []    "
		"      []  []      "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<337>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []  []"
		"    []  []  "
		"  []  []    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<338>
{
	using next = Constant<15>;
	using width = Constant<13>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][][][][][][][]"
		"  [][]      [][]          "
		"  []          []          "
		"[]            []          "
		"[]            []          "
		"[]            [][][][][][]"
		"[]            []          "
		"[]            []          "
		"  []          []          "
		"  [][]      [][]          "
		"      [][][][][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<339>
{
	using next = Constant<13>;
	using width = Constant<11>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  [][][][]  "
		"[][]    [][][]    [][]"
		"[]        []        []"
		"[]        [][][][][][]"
		"[]        []          "
		"[]        []          "
		"[][]    [][][]    [][]"
		"  [][][][]  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<340>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []      "
		"      []        "
		"                "
		"[][][][][][][]  "
		"[]          [][]"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[][][][][][]    "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<341>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []  "
		"  []    "
		"        "
		"[]  [][]"
		"[][]    "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<342>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"[][][][][][][]  "
		"[]          [][]"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[][][][][][]    "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"                "
		"        []      "
		"        []      "
		"        []      "
		"      []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<343>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"[]  [][]"
		"[][]    "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"        "
		"  []    "
		"  []    "
		"  []    "
		"[]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<344>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []  []      "
		"      []        "
		"                "
		"[][][][][][][]  "
		"[]          [][]"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[][][][][][]    "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<345>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []  "
		"  []    "
		"        "
		"[]  [][]"
		"[][]    "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<346>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []    "
		"      []      "
		"              "
		"    [][][]    "
		"[][]      [][]"
		"[]          []"
		"[]            "
		"  [][]        "
		"      [][]    "
		"          [][]"
		"            []"
		"[]          []"
		"[][]      [][]"
		"    [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<347>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []  "
		"    []    "
		"          "
		"  [][][]  "
		"[]      []"
		"[][]      "
		"  [][][]  "
		"      [][]"
		"        []"
		"[]      []"
		"  [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<348>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []      "
		"    []  []    "
		"              "
		"    [][][]    "
		"[][]      [][]"
		"[]          []"
		"[]            "
		"  [][]        "
		"      [][]    "
		"          [][]"
		"            []"
		"[]          []"
		"[][]      [][]"
		"    [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<349>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []    "
		"  []  []  "
		"          "
		"  [][][]  "
		"[]      []"
		"[][]      "
		"  [][][]  "
		"      [][]"
		"        []"
		"[]      []"
		"  [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<350>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    [][][]    "
		"[][]      [][]"
		"[]          []"
		"[]            "
		"  [][]        "
		"      [][]    "
		"          [][]"
		"            []"
		"[]          []"
		"[][]      [][]"
		"    [][][]    "
		"      []      "
		"  []    []    "
		"    [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<351>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][]  "
		"[]      []"
		"[][]      "
		"  [][][]  "
		"      [][]"
		"        []"
		"[]      []"
		"  [][][]  "
		"    []    "
		"[]    []  "
		"  [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<352>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []  []    "
		"      []      "
		"              "
		"  [][][][][]  "
		"[]          []"
		"[]            "
		"  [][][][][]  "
		"            []"
		"            []"
		"[]          []"
		"  [][][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<353>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  []    "
		"    []      "
		"            "
		"  [][][][]  "
		"[]        []"
		"[]          "
		"  [][][][]  "
		"        [][]"
		"          []"
		"[]        []"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<354>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][][][][][][][][]"
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"    []    []      "
		"      [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<355>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  []    "
		"  []    "
		"[][][]  "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"    [][]"
		"    []  "
		"[]    []"
		"  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<356>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []  []      "
		"        []        "
		"                  "
		"[][][][][][][][][]"
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<357>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          [][]"
		"  []        []"
		"  []      []  "
		"[][][]        "
		"  []          "
		"  []          "
		"  []          "
		"  []          "
		"  []          "
		"  []          "
		"    [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<358>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][][][][]"
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"      [][][][]    "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<359>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []    "
		"  []    "
		"[][][]  "
		"  []    "
		"  []    "
		"[][][][]"
		"  []    "
		"  []    "
		"  []    "
		"    [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<360>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]  []  "
		"    []  [][]    "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<361>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  []"
		"  []  [][]  "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<362>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][][]    "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<363>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<364>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      []  "
		"      [][][]    "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<365>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []      []"
		"    [][][]  "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<366>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]      "
		"    []    []    "
		"      [][]      "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<367>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]    "
		"  []    []  "
		"    [][]    "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<368>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []  []  "
		"      []  []    "
		"    []  []      "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<369>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []  []"
		"    []  []  "
		"  []  []    "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<370>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "
		"        []      "
		"      []        "
		"      [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<371>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"      []    "
		"    []      "
		"    [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<372>
{
	using next = Constant<13>;
	using width = Constant<13>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"            []            "
		"          []  []          "
		"                          "
		"[]          []          []"
		"[]          []          []"
		"[]        []  []        []"
		"  []      []  []      []  "
		"  []      []  []      []  "
		"  []      []  []      []  "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"      []          []      "
		"      []          []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<373>
{
	using next = Constant<10>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []        "
		"      []  []      "
		"                  "
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"  []    []    []  "
		"  []    []    []  "
		"  []  []  []  []  "
		"    []      []    "
		"    []      []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<374>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []        "
		"      []  []      "
		"                  "
		"[]              []"
		"[][]          [][]"
		"  []          []  "
		"    []      []    "
		"    []      []    "
		"      []  []      "
		"      [][][]      "
		"        []        "
		"        []        "
		"        []        "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<375>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"      []      "
		"    []  []    "
		"              "
		"[]          []"
		"[][]        []"
		"  []      []  "
		"  []      []  "
		"    []    []  "
		"    []  []    "
		"      [][]    "
		"      []      "
		"      []      "
		"    [][]      "
		"  [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<376>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]  [][]  "
		"              "
		"              "
		"[]          []"
		"  []      []  "
		"  []      []  "
		"    []  []    "
		"      []      "
		"      []      "
		"      []      "
		"      []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<377>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []    "
		"      []      "
		"              "
		"[][][][][][][]"
		"            []"
		"          []  "
		"        []    "
		"      [][]    "
		"      []      "
		"    []        "
		"  [][]        "
		"  []          "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<378>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []  "
		"      []    "
		"            "
		"[][][][][][]"
		"          []"
		"        []  "
		"      []    "
		"    []      "
		"  []        "
		"[]          "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<379>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]    "
		"              "
		"[][][][][][][]"
		"            []"
		"          []  "
		"        []    "
		"      [][]    "
		"      []      "
		"    []        "
		"  [][]        "
		"  []          "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<380>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]    "
		"            "
		"[][][][][][]"
		"          []"
		"        []  "
		"      []    "
		"    []      "
		"  []        "
		"[]          "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<381>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []  []    "
		"      []      "
		"              "
		"  [][][][][][]"
		"          []  "
		"        []    "
		"      []      "
		"    []        "
		"  []          "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<382>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  []    "
		"    []      "
		"            "
		"[][][][][][]"
		"          []"
		"        []  "
		"      []    "
		"    []      "
		"  []        "
		"[]          "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<390>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][]      "
		"[][]      [][]  "
		"[]          []  "
		"              []"
		"              []"
		"              []"
		"              []"
		"              []"
		"[]          []  "
		"[][]      [][]  "
		"    [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<393>
{
	using next = Constant<10>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][][]      "
		"  []        [][]  "
		"  []          []  "
		"  []            []"
		"  []            []"
		"[][][][]        []"
		"  []            []"
		"  []            []"
		"  []          []  "
		"  []        [][]  "
		"  [][][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<398>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][][]"
		"            []"
		"            []"
		"            []"
		"            []"
		"  [][][][][][]"
		"            []"
		"            []"
		"            []"
		"            []"
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<402>
{
	using next = Constant<8>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"          [][][]"
		"        []      "
		"        []      "
		"  [][][][][][]  "
		"      []        "
		"      []        "
		"      []        "
		"      []        "
		"      []        "
		"    []          "
		"    []          "
		"    []          "
		"[][]            "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<407>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"[][][][]"
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<410>
{
	using next = Constant<3>;
	using width = Constant<4>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"[][][][]"
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<413>
{
	using next = Constant<10>;
	using width = Constant<10>;
	using height = Constant<14>;
	using x = Constant<-1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    [][]          []"
		"    []  []        []"
		"    []  []        []"
		"    []    []      []"
		"    []    []      []"
		"    []      []    []"
		"    []      []    []"
		"    []        []  []"
		"    []        []  []"
		"    []          [][]"
		"    []          [][]"
		"    []              "
		"    []              "
		"[][]                "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<415>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[][][][][][][][][]"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<416>
{
	using next = Constant<11>;
	using width = Constant<10>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][]    [][]"
		"  [][]      [][]  []"
		"  []          [][]  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"  []          []    "
		"  [][]      [][]    "
		"      [][][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<417>
{
	using next = Constant<8>;
	using width = Constant<8>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  [][]"
		"[][]    [][]  []"
		"[]        [][]  "
		"[]        []    "
		"[]        []    "
		"[]        []    "
		"[][]    [][]    "
		"  [][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<423>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][]    "
		"[][]      [][]"
		"[]          []"
		"            []"
		"        [][]  "
		"    [][]      "
		"[][]          "
		"[]            "
		"[]          []"
		"[][]      [][]"
		"    [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<424>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][]  "
		"[]      []"
		"      [][]"
		"  [][][]  "
		"[][]      "
		"[]        "
		"[]      []"
		"  [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<430>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][][][][][][][][]"
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"          [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<431>
{
	using next = Constant<10>;
	using width = Constant<10>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]            [][][]"
		"[]            []  []"
		"[]            [][]  "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"  []        []      "
		"    [][][][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<432>
{
	using next = Constant<7>;
	using width = Constant<8>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]        [][][]"
		"[]        []  []"
		"[]        [][]  "
		"[]        []    "
		"[]        []    "
		"[]        []    "
		"[][]    [][]    "
		"  [][][]  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<437>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][][]"
		"            []"
		"          []  "
		"        []    "
		"      [][]    "
		"    [][][][]  "
		"    []        "
		"  [][]        "
		"  []          "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<438>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][]"
		"          []"
		"        []  "
		"  [][][][]  "
		"    []      "
		"  []        "
		"[]          "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<443>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[]        []"
		"[]        []"
		"          []"
		"        []  "
		"[][][][][][]"
		"    []      "
		"  []        "
		"[]          "
		"[]          "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<444>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][]"
		"[]          "
		"[]          "
		"[]          "
		"[][][][][]  "
		"          []"
		"          []"
		"          []"
		"[]        []"
		"[]        []"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<448>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<450>
{
	using next = Constant<9>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"      []    "
		"      []    "
		"      []    "
		"      []    "
		"      []    "
		"      []    "
		"[][][][][][]"
		"      []    "
		"[][][][][][]"
		"      []    "
		"      []    "
		"      []    "
		"      []    "
		"      []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<451>
{
	using next = Constant<4>;
	using width = Constant<1>;
	using height = Constant<11>;
	using x = Constant<2>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"[]"
		"  "
		"[]"
		"[]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<461>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []  []      "
		"        []        "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<462>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []  []    "
		"      []      "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<463>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []"
		"  []  "
		"      "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<464>
{
	using next = Constant<3>;
	using width = Constant<3>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []"
		"  []  "
		"      "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<465>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []  []      "
		"        []        "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<466>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []  []  "
		"      []    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<467>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []  []    "
		"        []      "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<468>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []  []  "
		"      []    "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<469>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][][]    "
		"                "
		"  [][]    [][]  "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<470>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"            "
		"  []    []  "
		"  []    []  "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<471>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []      "
		"      []        "
		"                "
		"  [][]    [][]  "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<472>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"  []    []  "
		"  []    []  "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<473>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []  []    "
		"        []      "
		"                "
		"  [][]    [][]  "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<474>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []  []  "
		"      []    "
		"            "
		"  []    []  "
		"  []    []  "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<475>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []        "
		"        []      "
		"                "
		"  [][]    [][]  "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<476>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      "
		"      []    "
		"            "
		"  []    []  "
		"  []    []  "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<477>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"          []"
		"          []"
		"[][][][][][]"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<478>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<15>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][]    "
		"                  "
		"    [][]  [][]    "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<479>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]    "
		"              "
		"  []    []    "
		"  []    []    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<480>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<15>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][]    "
		"                  "
		"        [][]      "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<481>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]    "
		"              "
		"    [][]      "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<482>
{
	using next = Constant<14>;
	using width = Constant<12>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][][][]        "
		"                        "
		"      [][][][][][][][][]"
		"      []    []          "
		"      []    []          "
		"    []      []          "
		"    []      []          "
		"    []      [][][][][][]"
		"  [][][][][][]          "
		"  []        []          "
		"  []        []          "
		"[]          []          "
		"[]          [][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<483>
{
	using next = Constant<13>;
	using width = Constant<11>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][][][]      "
		"                      "
		"  [][][][]  [][][][]  "
		"[][]      [][]    [][]"
		"          []        []"
		"  [][][][][][][][][][]"
		"[][]      []          "
		"[]        []          "
		"[][]    [][][]    [][]"
		"  [][][][]  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<484>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][]    "
		"  [][]        [][]"
		"  []            []"
		"[]                "
		"[]                "
		"[]        [][][][]"
		"[]              []"
		"[]        [][][][]"
		"  []            []"
		"  [][]      [][][]"
		"      [][][]    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<485>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"[][][][][][]"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<486>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []  []      "
		"        []        "
		"                  "
		"      [][][][]    "
		"  [][]        [][]"
		"  []            []"
		"[]                "
		"[]                "
		"[]        [][][][]"
		"[]              []"
		"[]              []"
		"  []            []"
		"  [][]      [][][]"
		"      [][][]    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<487>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    []  []  "
		"      []    "
		"            "
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"          []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<488>
{
	using next = Constant<9>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []  []      "
		"      []        "
		"                "
		"[]          []  "
		"[]        []    "
		"[]      []      "
		"[]    []        "
		"[]  []          "
		"[][][]          "
		"[]    []        "
		"[]      []      "
		"[]        []    "
		"[]          []  "
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<489>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []      "
		"  []        "
		"            "
		"[]          "
		"[]          "
		"[]          "
		"[]      []  "
		"[]    []    "
		"[]  []      "
		"[][]        "
		"[]  []      "
		"[]    []    "
		"[]      []  "
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<490>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "
		"        []        "
		"      []          "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<491>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "
		"      []    "
		"    []      "
		"    [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<492>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"      [][][][]    "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "
		"        []        "
		"      []          "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<493>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][][]  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "
		"      []    "
		"    []      "
		"    [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<496>
{
	using next = Constant<3>;
	using width = Constant<4>;
	using height = Constant<14>;
	using x = Constant<-1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  []  []"
		"    []  "
		"        "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"[][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<500>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []      "
		"        []        "
		"                  "
		"      [][][][]    "
		"  [][]        [][]"
		"  []            []"
		"[]                "
		"[]                "
		"[]        [][][][]"
		"[]              []"
		"[]              []"
		"  []            []"
		"  [][]      [][][]"
		"      [][][]    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<501>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"          []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<504>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []          "
		"      []        "
		"                "
		"[][]          []"
		"[]  []        []"
		"[]  []        []"
		"[]    []      []"
		"[]    []      []"
		"[]      []    []"
		"[]      []    []"
		"[]        []  []"
		"[]        []  []"
		"[]          [][]"
		"[]          [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<505>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      "
		"      []    "
		"            "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<506>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<17>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []      "
		"        []        "
		"                  "
		"        [][]      "
		"      []    []    "
		"      []    []    "
		"        [][]      "
		"        [][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<507>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []    "
		"      []      "
		"              "
		"    [][]      "
		"  []    []    "
		"    [][]      "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<508>
{
	using next = Constant<14>;
	using width = Constant<12>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"              []        "
		"            []          "
		"                        "
		"      [][][][][][][][][]"
		"      []    []          "
		"      []    []          "
		"    []      []          "
		"    []      []          "
		"    []      [][][][][][]"
		"  [][][][][][]          "
		"  []        []          "
		"  []        []          "
		"[]          []          "
		"[]          [][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<509>
{
	using next = Constant<13>;
	using width = Constant<11>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"            []        "
		"          []          "
		"                      "
		"  [][][][]  [][][][]  "
		"[][]      [][]    [][]"
		"          []        []"
		"  [][][][][][][][][][]"
		"[][]      []          "
		"[]        []          "
		"[][]    [][][]    [][]"
		"  [][][][]  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<510>
{
	using next = Constant<11>;
	using width = Constant<11>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"            []        "
		"          []          "
		"                      "
		"        [][][]      []"
		"    [][]      [][][]  "
		"    []          []    "
		"  []          []  []  "
		"  []        []    []  "
		"  []      []      []  "
		"  []    []        []  "
		"  []  []          []  "
		"    []          []    "
		"  [][][]      [][]    "
		"[]      [][][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<511>
{
	using next = Constant<8>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []    "
		"        []      "
		"                "
		"    [][][][]  []"
		"  [][]      []  "
		"  []      [][]  "
		"  []    []  []  "
		"  []  []    []  "
		"  [][]      []  "
		"  []      [][]  "
		"[]  [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<512>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<15>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  []          "
		"    []  []        "
		"      []  []      "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<513>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []        "
		"  []  []      "
		"    []  []    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<514>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][]      "
		"    []      []    "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<515>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][]    "
		"  []      []  "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<516>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []        "
		"  []  []      "
		"    []  []    "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<517>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []      "
		"  []  []    "
		"    []  []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<518>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][]    "
		"  []      []  "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<519>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][]  "
		"  []      []"
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<520>
{
	using next = Constant<4>;
	using width = Constant<5>;
	using height = Constant<15>;
	using x = Constant<-1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []    "
		"  []  []  "
		"    []  []"
		"          "
		"      []  "
		"      []  "
		"      []  "
		"      []  "
		"      []  "
		"      []  "
		"      []  "
		"      []  "
		"      []  "
		"      []  "
		"      []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<521>
{
	using next = Constant<3>;
	using width = Constant<5>;
	using height = Constant<12>;
	using x = Constant<-2>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []    "
		"  []  []  "
		"    []  []"
		"          "
		"      []  "
		"      []  "
		"      []  "
		"      []  "
		"      []  "
		"      []  "
		"      []  "
		"      []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<522>
{
	using next = Constant<4>;
	using width = Constant<5>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][]  "
		"[]      []"
		"          "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<523>
{
	using next = Constant<3>;
	using width = Constant<5>;
	using height = Constant<11>;
	using x = Constant<-1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][]  "
		"[]      []"
		"          "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<524>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  []          "
		"    []  []        "
		"      []  []      "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<525>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []      "
		"  []  []    "
		"    []  []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<526>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][]      "
		"    []      []    "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<527>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][]  "
		"  []      []"
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<528>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  []        "
		"    []  []      "
		"      []  []    "
		"                "
		"[][][][][][][]  "
		"[]          [][]"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[][][][][][]    "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<529>
{
	using next = Constant<5>;
	using width = Constant<5>;
	using height = Constant<12>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []    "
		"  []  []  "
		"    []  []"
		"          "
		"  []  [][]"
		"  [][]    "
		"  []      "
		"  []      "
		"  []      "
		"  []      "
		"  []      "
		"  []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<530>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][]      "
		"  []      []    "
		"                "
		"[][][][][][][]  "
		"[]          [][]"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[][][][][][]    "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<531>
{
	using next = Constant<5>;
	using width = Constant<5>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][]  "
		"[]      []"
		"          "
		"  []  [][]"
		"  [][]    "
		"  []      "
		"  []      "
		"  []      "
		"  []      "
		"  []      "
		"  []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<532>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  []  []        "
		"    []  []      "
		"      []  []    "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<533>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []      "
		"  []  []    "
		"    []  []  "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<534>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][]    "
		"    []      []  "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<535>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][]  "
		"  []      []"
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<536>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"    [][][]    "
		"[][]      [][]"
		"[]          []"
		"[]            "
		"  [][]        "
		"      [][]    "
		"          [][]"
		"            []"
		"[]          []"
		"[][]      [][]"
		"    [][][]    "
		"              "
		"      []      "
		"      []      "
		"      []      "
		"    []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<537>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"  [][][]  "
		"[]      []"
		"[][]      "
		"  [][][]  "
		"      [][]"
		"        []"
		"[]      []"
		"  [][][]  "
		"          "
		"    []    "
		"    []    "
		"    []    "
		"  []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<538>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<16>;
	using x = Constant<0>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"[][][][][][][][][]"
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"                  "
		"        []        "
		"        []        "
		"        []        "
		"      []          "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<539>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<15>;
	using x = Constant<0>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"  []    "
		"  []    "
		"[][][]  "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"    [][]"
		"        "
		"    []  "
		"    []  "
		"    []  "
		"  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<542>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []  []    "
		"        []      "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[][][][][][][][]"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<543>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]  []      "
		"  []        "
		"            "
		"[]          "
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<550>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]      "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<551>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]      "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<552>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"
		"      []      "
		"  []    []    "
		"    [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<553>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "
		"    []      "
		"[]    []    "
		"  [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<554>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][]    "
		"                  "
		"    [][]    [][]  "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<555>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"            "
		"  []    []  "
		"  []    []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<556>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][]    "
		"                  "
		"      [][]  []    "
		"    []  [][]      "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<557>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"            "
		"  [][]  []  "
		"[]  [][]    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<558>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]      "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<559>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<560>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][]    "
		"                  "
		"        [][]      "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<561>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"            "
		"    [][]    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<562>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][]    "
		"                  "
		"[]              []"
		"[][]          [][]"
		"  []          []  "
		"    []      []    "
		"    []      []    "
		"      []  []      "
		"      [][][]      "
		"        []        "
		"        []        "
		"        []        "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<563>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][][]    "
		"              "
		"[]          []"
		"[][]        []"
		"  []      []  "
		"  []      []  "
		"    []    []  "
		"    []  []    "
		"      [][]    "
		"      []      "
		"      []      "
		"    [][]      "
		"  [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<592>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]  [][][]  "
		"  [][]    [][]"
		"  []        []"
		"  []      [][]"
		"  [][][][][]  "
		"  []          "
		"  [][]    [][]"
		"    [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<596>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"          []"
		"          []"
		"          []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<600>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"          []"
		"          []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<601>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"          []"
		"          []"
		"[][][][][][]"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<607>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"  [][][]"
		"    []  "
		"    []  "
		"[][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<613>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"          []"
		"          []"
		"          []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<629>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<633>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []"
		"      []"
		"      []"
		"      []"
		"      []"
		"      []"
		"    [][]"
		"[][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<647>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]    "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"    []  "
		"  [][][]"
		"    []  "
		"    []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<648>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  []    "
		"  []    "
		"[][][]  "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"    [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<649>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]        []"
		"[]        []"
		"[]        []"
		"[][][][][][]"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<652>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<8>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []      "
		"    []  []    "
		"    []  []    "
		"  []      []  "
		"  []      []  "
		"  []      []  "
		"[]          []"
		"[]          []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<653>
{
	using next = Constant<10>;
	using width = Constant<9>;
	using height = Constant<8>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      []    "
		"    []      []    "
		"  []  []  []  []  "
		"  []    []    []  "
		"  []    []    []  "
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<654>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]  "
		"      [][]    "
		"      []      "
		"      []      "
		"    [][]      "
		"    []  []    "
		"  []    []    "
		"  []      []  "
		"  []      []  "
		"[]        [][]"
		"[]          []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<670>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]        []"
		"  []      []"
		"    []    []"
		"      []  []"
		"        [][]"
		"      []  []"
		"    []    []"
		"  []      []"
		"          []"
		"          []"
		"          []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<699>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<3>;
	using x = Constant<0>;
	using y = Constant<8>;
	using bit_map = decltype(
		"  []"
		"[]  "
		"[][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<700>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<3>;
	using x = Constant<1>;
	using y = Constant<8>;
	using bit_map = decltype(
		"[][]"
		"  []"
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<701>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<3>;
	using x = Constant<1>;
	using y = Constant<8>;
	using bit_map = decltype(
		"[][]"
		"[]  "
		"  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<710>
{
	using next = Constant<5>;
	using width = Constant<3>;
	using height = Constant<2>;
	using x = Constant<1>;
	using y = Constant<9>;
	using bit_map = decltype(
		"  []  "
		"[]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<711>
{
	using next = Constant<5>;
	using width = Constant<3>;
	using height = Constant<2>;
	using x = Constant<1>;
	using y = Constant<9>;
	using bit_map = decltype(
		"[]  []"
		"  []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<712>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<3>;
	using x = Constant<1>;
	using y = Constant<8>;
	using bit_map = decltype(
		"[]"
		"[]"
		"[]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<713>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<9>;
	using bit_map = decltype(
		"[][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<714>
{
	using next = Constant<5>;
	using width = Constant<2>;
	using height = Constant<2>;
	using x = Constant<2>;
	using y = Constant<9>;
	using bit_map = decltype(
		"  []"
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<715>
{
	using next = Constant<5>;
	using width = Constant<2>;
	using height = Constant<2>;
	using x = Constant<1>;
	using y = Constant<9>;
	using bit_map = decltype(
		"[]  "
		"  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<717>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<718>
{
	using next = Constant<5>;
	using width = Constant<2>;
	using height = Constant<2>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]  "
		"  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<719>
{
	using next = Constant<5>;
	using width = Constant<2>;
	using height = Constant<2>;
	using x = Constant<2>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  []"
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<728>
{
	using next = Constant<5>;
	using width = Constant<5>;
	using height = Constant<2>;
	using x = Constant<0>;
	using y = Constant<9>;
	using bit_map = decltype(
		"[]      []"
		"  [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<729>
{
	using next = Constant<4>;
	using width = Constant<2>;
	using height = Constant<1>;
	using x = Constant<1>;
	using y = Constant<9>;
	using bit_map = decltype(
		"[][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<730>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<3>;
	using x = Constant<0>;
	using y = Constant<8>;
	using bit_map = decltype(
		"  [][]  "
		"[]    []"
		"  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<731>
{
	using next = Constant<5>;
	using width = Constant<3>;
	using height = Constant<3>;
	using x = Constant<2>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  []  "
		"[]    "
		"[][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<732>
{
	using next = Constant<5>;
	using width = Constant<5>;
	using height = Constant<2>;
	using x = Constant<0>;
	using y = Constant<9>;
	using bit_map = decltype(
		"  [][]  []"
		"[]  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<733>
{
	using next = Constant<5>;
	using width = Constant<5>;
	using height = Constant<3>;
	using x = Constant<0>;
	using y = Constant<8>;
	using bit_map = decltype(
		"    []  []"
		"  []  []  "
		"[]  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<750>
{
	using next = Constant<6>;
	using width = Constant<5>;
	using height = Constant<3>;
	using x = Constant<1>;
	using y = Constant<8>;
	using bit_map = decltype(
		"[][]  [][]"
		"  []    []"
		"[]    []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<894>
{
	using next = Constant<4>;
	using width = Constant<2>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  []"
		"  []"
		"    "
		"    "
		"    "
		"    "
		"  []"
		"  []"
		"  []"
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<900>
{
	using next = Constant<5>;
	using width = Constant<2>;
	using height = Constant<2>;
	using x = Constant<2>;
	using y = Constant<9>;
	using bit_map = decltype(
		"  []"
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<901>
{
	using next = Constant<5>;
	using width = Constant<5>;
	using height = Constant<4>;
	using x = Constant<0>;
	using y = Constant<9>;
	using bit_map = decltype(
		"      []  "
		"    []    "
		"          "
		"[][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<903>
{
	using next = Constant<4>;
	using width = Constant<2>;
	using height = Constant<1>;
	using x = Constant<1>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<956>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"[]  [][]  []"
		"[]          "
		"[]          "
		"[]          "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7680>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<15>;
	using x = Constant<0>;
	using y = Constant<-4>;
	using bit_map = decltype(
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"                  "
		"        [][]      "
		"      []    []    "
		"        [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7681>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<-4>;
	using bit_map = decltype(
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"
		"              "
		"    [][]      "
		"  []    []    "
		"    [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7682>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]      "
		"              "
		"[][][][][][]  "
		"[]        [][]"
		"[]          []"
		"[]          []"
		"[]        []  "
		"[][][][][]    "
		"[]        []  "
		"[]          []"
		"[]          []"
		"[]        [][]"
		"[][][][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7683>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]        "
		"            "
		"[]          "
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"[]  [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7684>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][][][]  "
		"[]        [][]"
		"[]          []"
		"[]          []"
		"[]        []  "
		"[][][][][]    "
		"[]        []  "
		"[]          []"
		"[]          []"
		"[]        [][]"
		"[][][][][][]  "
		"              "
		"    [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7685>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"[]  [][][]  "
		"            "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7686>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][][][]  "
		"[]        [][]"
		"[]          []"
		"[]          []"
		"[]        []  "
		"[][][][][]    "
		"[]        []  "
		"[]          []"
		"[]          []"
		"[]        [][]"
		"[][][][][][]  "
		"              "
		"  [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7687>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"[]  [][][]  "
		"            "
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7688>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<17>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"        []      "
		"      []        "
		"                "
		"      [][][]    "
		"  [][]      [][]"
		"  []          []"
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"[]              "
		"  []          []"
		"  [][]      [][]"
		"      [][][]    "
		"        []      "
		"    []    []    "
		"      [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7689>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]          "
		"[]          "
		"[]          "
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "
		"      []    "
		"  []    []  "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7690>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]        "
		"                "
		"[][][][][]      "
		"[]        [][]  "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[]        [][]  "
		"[][][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7691>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]"
		"            "
		"          []"
		"          []"
		"          []"
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7692>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][][]      "
		"[]        [][]  "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[]        [][]  "
		"[][][][][]      "
		"                "
		"    [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7693>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"          []"
		"          []"
		"          []"
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"            "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7694>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][][]      "
		"[]        [][]  "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[]        [][]  "
		"[][][][][]      "
		"                "
		"  [][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7695>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"          []"
		"          []"
		"          []"
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"            "
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7696>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][][][][]      "
		"[]        [][]  "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[]        [][]  "
		"[][][][][]      "
		"      []        "
		"  []    []      "
		"    [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7697>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"          []"
		"          []"
		"          []"
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"      []    "
		"  []    []  "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7698>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][][][][]      "
		"[]        [][]  "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[]        [][]  "
		"[][][][][]      "
		"                "
		"      []        "
		"    []  []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7699>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"          []"
		"          []"
		"          []"
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"            "
		"      []    "
		"    []  []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7700>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []        "
		"      []      "
		"              "
		"  [][][][]    "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7701>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      "
		"      []    "
		"            "
		"  [][][][]  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7702>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []    "
		"      []      "
		"              "
		"  [][][][]    "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7703>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"  [][][][]  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7704>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"
		"              "
		"      []      "
		"    []  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7705>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "
		"            "
		"    []      "
		"  []  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7706>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"
		"              "
		"  [][]  []    "
		"[]  [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7707>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "
		"            "
		"  [][]  []  "
		"[]  [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7708>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<17>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]      []    "
		"  [][][]      "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"
		"      []      "
		"  []    []    "
		"    [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7709>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  []      []"
		"    [][][]  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "
		"    []      "
		"[]    []    "
		"  [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7710>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]      "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[]            "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7711>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]  "
		"        "
		"    [][]"
		"  []    "
		"  []    "
		"[][][]  "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7712>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][][][]    "
		"                  "
		"      [][][][]    "
		"  [][]        [][]"
		"  []            []"
		"[]                "
		"[]                "
		"[]        [][][][]"
		"[]              []"
		"[]              []"
		"  []            []"
		"  [][]      [][][]"
		"      [][][]    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7713>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][][][]  "
		"            "
		"  [][][]  []"
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"          []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7714>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]      "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[][][][][][][][]"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7715>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]        "
		"            "
		"[]          "
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7716>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[][][][][][][][]"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"                "
		"      [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7717>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"            "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7718>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  [][]  "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[][][][][][][][]"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7719>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]  [][]    "
		"              "
		"  []          "
		"  []          "
		"  []          "
		"  []  [][][]  "
		"  [][]    [][]"
		"  []        []"
		"  []        []"
		"  []        []"
		"  []        []"
		"  []        []"
		"  []        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7720>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[][][][][][][][]"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"        []      "
		"    []    []    "
		"      [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7721>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"      []    "
		"  []    []  "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7722>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[][][][][][][][]"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"                "
		"    []      []  "
		"      [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7723>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"            "
		"  []      []"
		"    [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7724>
{
	using next = Constant<4>;
	using width = Constant<5>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"          "
		"  [][]  []"
		"[]  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7725>
{
	using next = Constant<3>;
	using width = Constant<5>;
	using height = Constant<14>;
	using x = Constant<-1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    []    "
		"    []    "
		"          "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"          "
		"  [][]  []"
		"[]  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7726>
{
	using next = Constant<4>;
	using width = Constant<5>;
	using height = Constant<16>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []  "
		"    []    "
		"          "
		"[][]  [][]"
		"          "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7727>
{
	using next = Constant<3>;
	using width = Constant<3>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []"
		"  []  "
		"      "
		"[]  []"
		"[]  []"
		"      "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7728>
{
	using next = Constant<9>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []      "
		"      []        "
		"                "
		"[]          []  "
		"[]        []    "
		"[]      []      "
		"[]    []        "
		"[]  []          "
		"[][][]          "
		"[]    []        "
		"[]      []      "
		"[]        []    "
		"[]          []  "
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7729>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      "
		"  []        "
		"            "
		"[]          "
		"[]          "
		"[]          "
		"[]      []  "
		"[]    []    "
		"[]  []      "
		"[][]        "
		"[]  []      "
		"[]    []    "
		"[]      []  "
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7730>
{
	using next = Constant<9>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]          []  "
		"[]        []    "
		"[]      []      "
		"[]    []        "
		"[]  []          "
		"[][][]          "
		"[]    []        "
		"[]      []      "
		"[]        []    "
		"[]          []  "
		"[]            []"
		"                "
		"      [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7731>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]      []  "
		"[]    []    "
		"[]  []      "
		"[][]        "
		"[]  []      "
		"[]    []    "
		"[]      []  "
		"[]        []"
		"            "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7732>
{
	using next = Constant<9>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]          []  "
		"[]        []    "
		"[]      []      "
		"[]    []        "
		"[]  []          "
		"[][][]          "
		"[]    []        "
		"[]      []      "
		"[]        []    "
		"[]          []  "
		"[]            []"
		"                "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7733>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]      []  "
		"[]    []    "
		"[]  []      "
		"[][]        "
		"[]  []      "
		"[]    []    "
		"[]      []  "
		"[]        []"
		"            "
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7734>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<2>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[][][][][][]"
		"            "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7735>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"    "
		"[][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7736>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][]      "
		"              "
		"  []          "
		"  []          "
		"  []          "
		"  []          "
		"  []          "
		"  []          "
		"  []          "
		"  []          "
		"  []          "
		"  []          "
		"  [][][][][][]"
		"              "
		"      [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7737>
{
	using next = Constant<3>;
	using width = Constant<4>;
	using height = Constant<15>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][]"
		"        "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"        "
		"  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7738>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<2>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[][][][][][]"
		"            "
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7739>
{
	using next = Constant<3>;
	using width = Constant<4>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"        "
		"[][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7740>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<2>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[]          "
		"[][][][][][]"
		"            "
		"    []      "
		"  []  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7741>
{
	using next = Constant<3>;
	using width = Constant<3>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"  []  "
		"      "
		"  []  "
		"[]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7742>
{
	using next = Constant<12>;
	using width = Constant<11>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"            []        "
		"          []          "
		"                      "
		"[]                  []"
		"[][]              [][]"
		"[][]              [][]"
		"[]  []          []  []"
		"[]  []          []  []"
		"[]    []      []    []"
		"[]    []      []    []"
		"[]      []  []      []"
		"[]      []  []      []"
		"[]        []        []"
		"[]        []        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7743>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []      "
		"        []        "
		"                  "
		"[]  [][]    [][]  "
		"[][]    [][]    []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7744>
{
	using next = Constant<12>;
	using width = Constant<11>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          [][]        "
		"                      "
		"[]                  []"
		"[][]              [][]"
		"[][]              [][]"
		"[]  []          []  []"
		"[]  []          []  []"
		"[]    []      []    []"
		"[]    []      []    []"
		"[]      []  []      []"
		"[]      []  []      []"
		"[]        []        []"
		"[]        []        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7745>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]        "
		"                  "
		"[]  [][]    [][]  "
		"[][]    [][]    []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7746>
{
	using next = Constant<12>;
	using width = Constant<11>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]                  []"
		"[][]              [][]"
		"[][]              [][]"
		"[]  []          []  []"
		"[]  []          []  []"
		"[]    []      []    []"
		"[]    []      []    []"
		"[]      []  []      []"
		"[]      []  []      []"
		"[]        []        []"
		"[]        []        []"
		"                      "
		"          [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7747>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]  [][]    [][]  "
		"[][]    [][]    []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"                  "
		"        [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7748>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]      "
		"                "
		"[][]          []"
		"[]  []        []"
		"[]  []        []"
		"[]    []      []"
		"[]    []      []"
		"[]      []    []"
		"[]      []    []"
		"[]        []  []"
		"[]        []  []"
		"[]          [][]"
		"[]          [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7749>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]    "
		"            "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7750>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][]          []"
		"[]  []        []"
		"[]  []        []"
		"[]    []      []"
		"[]    []      []"
		"[]      []    []"
		"[]      []    []"
		"[]        []  []"
		"[]        []  []"
		"[]          [][]"
		"[]          [][]"
		"                "
		"      [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7751>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"            "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7752>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][]          []"
		"[]  []        []"
		"[]  []        []"
		"[]    []      []"
		"[]    []      []"
		"[]      []    []"
		"[]      []    []"
		"[]        []  []"
		"[]        []  []"
		"[]          [][]"
		"[]          [][]"
		"                "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7753>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"            "
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7754>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][]          []"
		"[]  []        []"
		"[]  []        []"
		"[]    []      []"
		"[]    []      []"
		"[]      []    []"
		"[]      []    []"
		"[]        []  []"
		"[]        []  []"
		"[]          [][]"
		"[]          [][]"
		"                "
		"        []      "
		"      []  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7755>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"            "
		"      []    "
		"    []  []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7756>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<17>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []      "
		"        []        "
		"                  "
		"      [][]  []    "
		"    []  [][]      "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7757>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"  [][]  []  "
		"[]  [][]    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7758>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  [][]    "
		"                  "
		"      [][]  []    "
		"    []  [][]      "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7759>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]  [][]  "
		"            "
		"  [][]  []  "
		"[]  [][]    "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7760>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []          "
		"        []        "
		"                  "
		"      [][][][]    "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7761>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      "
		"      []    "
		"            "
		"  [][][][]  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7762>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []      "
		"        []        "
		"                  "
		"      [][][][]    "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7763>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"  [][][][]  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7764>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []    "
		"      []      "
		"              "
		"[][][][][][]  "
		"[]        [][]"
		"[]          []"
		"[]          []"
		"[]        [][]"
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[]            "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7765>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"[]  [][][]  "
		"[]          "
		"[]          "
		"[]          "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7766>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]      "
		"              "
		"[][][][][][]  "
		"[]        [][]"
		"[]          []"
		"[]          []"
		"[]        [][]"
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[]            "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7767>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    [][]    "
		"            "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"[]  [][][]  "
		"[]          "
		"[]          "
		"[]          "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7768>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]      "
		"                "
		"[][][][][][][]  "
		"[]          [][]"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[][][][][][]    "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7769>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]  "
		"        "
		"[]  [][]"
		"[][]    "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7770>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][][][][]  "
		"[]          [][]"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[][][][][][]    "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"                "
		"      [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7771>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]  [][]"
		"[][]    "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"        "
		"[][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7772>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"    [][][][]    "
		"                "
		"[][][][][][][]  "
		"[]          [][]"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[][][][][][]    "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"                "
		"      [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7773>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][]"
		"        "
		"[]  [][]"
		"[][]    "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"[]      "
		"        "
		"[][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7774>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][][][][]  "
		"[]          [][]"
		"[]            []"
		"[]            []"
		"[]          []  "
		"[][][][][][]    "
		"[]          []  "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"                "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7775>
{
	using next = Constant<5>;
	using width = Constant<5>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  []  [][]"
		"  [][]    "
		"  []      "
		"  []      "
		"  []      "
		"  []      "
		"  []      "
		"  []      "
		"          "
		"[][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7776>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]    "
		"              "
		"    [][][]    "
		"[][]      [][]"
		"[]          []"
		"[]            "
		"  [][]        "
		"      [][]    "
		"          [][]"
		"            []"
		"[]          []"
		"[][]      [][]"
		"    [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7777>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]    "
		"          "
		"  [][][]  "
		"[]      []"
		"[][]      "
		"  [][][]  "
		"      [][]"
		"        []"
		"[]      []"
		"  [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7778>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"    [][][]    "
		"[][]      [][]"
		"[]          []"
		"[]            "
		"  [][]        "
		"      [][]    "
		"          [][]"
		"            []"
		"[]          []"
		"[][]      [][]"
		"    [][][]    "
		"              "
		"      [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7779>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  [][][]  "
		"[]      []"
		"[][]      "
		"  [][][]  "
		"      [][]"
		"        []"
		"[]      []"
		"  [][][]  "
		"          "
		"    [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7780>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]    "
		"              "
		"        []    "
		"      []      "
		"              "
		"    [][][]    "
		"[][]      [][]"
		"[]          []"
		"[]            "
		"  [][]        "
		"      [][]    "
		"          [][]"
		"            []"
		"[]          []"
		"[][]      [][]"
		"    [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7781>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  "
		"          "
		"      []  "
		"    []    "
		"          "
		"  [][][]  "
		"[]      []"
		"[][]      "
		"  [][][]  "
		"      [][]"
		"        []"
		"[]      []"
		"  [][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7782>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]    "
		"              "
		"    []  []    "
		"      []      "
		"              "
		"  [][][][][]  "
		"[]          []"
		"[]            "
		"  [][][][][]  "
		"            []"
		"            []"
		"[]          []"
		"  [][][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7783>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]    "
		"            "
		"  []  []    "
		"    []      "
		"            "
		"  [][][][]  "
		"[]        []"
		"[]          "
		"  [][][][]  "
		"        [][]"
		"          []"
		"[]        []"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7784>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"    [][]      "
		"              "
		"    [][][]    "
		"[][]      [][]"
		"[]          []"
		"[]            "
		"  [][]        "
		"      [][]    "
		"          [][]"
		"            []"
		"[]          []"
		"[][]      [][]"
		"    [][][]    "
		"              "
		"      [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7785>
{
	using next = Constant<7>;
	using width = Constant<5>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  [][]    "
		"          "
		"  [][][]  "
		"[]      []"
		"[][]      "
		"  [][][]  "
		"      [][]"
		"        []"
		"[]      []"
		"  [][][]  "
		"          "
		"    [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7786>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]      "
		"                  "
		"[][][][][][][][][]"
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7787>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<12>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]  "
		"        "
		"  []    "
		"  []    "
		"[][][]  "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"    [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7788>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][][][][][][]"
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"                  "
		"        [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7789>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<12>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  []    "
		"  []    "
		"[][][]  "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"    [][]"
		"        "
		"  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7790>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][][][][][][]"
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"                  "
		"      [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7791>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<12>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  []    "
		"  []    "
		"[][][]  "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"    [][]"
		"        "
		"[][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7792>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[][][][][][][][][]"
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"                  "
		"        []        "
		"      []  []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7793>
{
	using next = Constant<4>;
	using width = Constant<4>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  []    "
		"  []    "
		"[][][]  "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"  []    "
		"    [][]"
		"        "
		"    []  "
		"  []  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7794>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "
		"                "
		"    [][]  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7795>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"            "
		"  [][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7796>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "
		"                "
		"    [][]  []    "
		"  []  [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7797>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"            "
		"  [][]  []  "
		"[]  [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7798>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "
		"                "
		"        []      "
		"      []  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7799>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"            "
		"      []    "
		"    []  []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7800>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<17>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []    "
		"        []      "
		"                "
		"      [][]  []  "
		"    []  [][]    "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7801>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []  "
		"      []    "
		"            "
		"    [][]  []"
		"  []  [][]  "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7802>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<15>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  [][]  "
		"                "
		"    [][][][]    "
		"                "
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7803>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<12>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]  [][]"
		"            "
		"  [][][][]  "
		"            "
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7804>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]  []    "
		"    []  [][]      "
		"                  "
		"[]              []"
		"[]              []"
		"  []          []  "
		"  []          []  "
		"  [][]      [][]  "
		"    []      []    "
		"    []      []    "
		"      []  []      "
		"      []  []      "
		"        []        "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7805>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  []  "
		"  []  [][]    "
		"              "
		"[]          []"
		"[]          []"
		"  []      []  "
		"  []      []  "
		"  []      []  "
		"    []  []    "
		"    []  []    "
		"      []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7806>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]              []"
		"[]              []"
		"  []          []  "
		"  []          []  "
		"  [][]      [][]  "
		"    []      []    "
		"    []      []    "
		"      []  []      "
		"      []  []      "
		"        []        "
		"        []        "
		"                  "
		"        [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7807>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]          []"
		"[]          []"
		"  []      []  "
		"  []      []  "
		"  []      []  "
		"    []  []    "
		"    []  []    "
		"      []      "
		"              "
		"      [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7808>
{
	using next = Constant<13>;
	using width = Constant<13>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []              "
		"            []            "
		"                          "
		"[]          []          []"
		"[]          []          []"
		"[]        []  []        []"
		"  []      []  []      []  "
		"  []      []  []      []  "
		"  []      []  []      []  "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"      []          []      "
		"      []          []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7809>
{
	using next = Constant<10>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []          "
		"        []        "
		"                  "
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"  []    []    []  "
		"  []    []    []  "
		"  []  []  []  []  "
		"    []      []    "
		"    []      []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7810>
{
	using next = Constant<13>;
	using width = Constant<13>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"              []          "
		"            []            "
		"                          "
		"[]          []          []"
		"[]          []          []"
		"[]        []  []        []"
		"  []      []  []      []  "
		"  []      []  []      []  "
		"  []      []  []      []  "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"      []          []      "
		"      []          []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7811>
{
	using next = Constant<10>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []      "
		"        []        "
		"                  "
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"  []    []    []  "
		"  []    []    []  "
		"  []  []  []  []  "
		"    []      []    "
		"    []      []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7812>
{
	using next = Constant<13>;
	using width = Constant<13>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]  [][]        "
		"                          "
		"[]          []          []"
		"[]          []          []"
		"[]        []  []        []"
		"  []      []  []      []  "
		"  []      []  []      []  "
		"  []      []  []      []  "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"      []          []      "
		"      []          []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7813>
{
	using next = Constant<10>;
	using width = Constant<9>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  [][]    "
		"                  "
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"  []    []    []  "
		"  []    []    []  "
		"  []  []  []  []  "
		"    []      []    "
		"    []      []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7814>
{
	using next = Constant<13>;
	using width = Constant<13>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"            [][]          "
		"                          "
		"[]          []          []"
		"[]          []          []"
		"[]        []  []        []"
		"  []      []  []      []  "
		"  []      []  []      []  "
		"  []      []  []      []  "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"      []          []      "
		"      []          []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7815>
{
	using next = Constant<10>;
	using width = Constant<9>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]      "
		"                  "
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"  []    []    []  "
		"  []    []    []  "
		"  []  []  []  []  "
		"    []      []    "
		"    []      []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7816>
{
	using next = Constant<13>;
	using width = Constant<13>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]          []          []"
		"[]          []          []"
		"[]        []  []        []"
		"  []      []  []      []  "
		"  []      []  []      []  "
		"  []      []  []      []  "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"      []          []      "
		"      []          []      "
		"                          "
		"            [][]          "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7817>
{
	using next = Constant<10>;
	using width = Constant<9>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"  []    []    []  "
		"  []    []    []  "
		"  []  []  []  []  "
		"    []      []    "
		"    []      []    "
		"                  "
		"        [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7818>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]      "
		"                  "
		"[]              []"
		"  []          []  "
		"    []      []    "
		"      []  []      "
		"        []        "
		"        []        "
		"      []  []      "
		"    []      []    "
		"  []          []  "
		"  []          []  "
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7819>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]    "
		"              "
		"[][]      [][]"
		"  []      []  "
		"    []  []    "
		"      []      "
		"      []      "
		"    []  []    "
		"  []      []  "
		"[][]      [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7820>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  [][]    "
		"                  "
		"[]              []"
		"  []          []  "
		"    []      []    "
		"      []  []      "
		"        []        "
		"        []        "
		"      []  []      "
		"    []      []    "
		"  []          []  "
		"  []          []  "
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7821>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]  [][]  "
		"              "
		"[][]      [][]"
		"  []      []  "
		"    []  []    "
		"      []      "
		"      []      "
		"    []  []    "
		"  []      []  "
		"[][]      [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7822>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]      "
		"                  "
		"[]              []"
		"[][]          [][]"
		"  []          []  "
		"    []      []    "
		"    []      []    "
		"      []  []      "
		"      [][][]      "
		"        []        "
		"        []        "
		"        []        "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7823>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    [][]      "
		"              "
		"[]          []"
		"[][]        []"
		"  []      []  "
		"  []      []  "
		"    []    []  "
		"    []  []    "
		"      [][]    "
		"      []      "
		"      []      "
		"    [][]      "
		"  [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7824>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []      "
		"    []  []    "
		"              "
		"[][][][][][][]"
		"            []"
		"          []  "
		"        []    "
		"      [][]    "
		"      []      "
		"    []        "
		"  [][]        "
		"  []          "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7825>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []    "
		"    []  []  "
		"            "
		"[][][][][][]"
		"          []"
		"        []  "
		"      []    "
		"    []      "
		"  []        "
		"[]          "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7826>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][][][][]"
		"            []"
		"          []  "
		"        []    "
		"      [][]    "
		"      []      "
		"    []        "
		"  [][]        "
		"  []          "
		"[]            "
		"[][][][][][][]"
		"              "
		"    [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7827>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][][][]"
		"          []"
		"        []  "
		"      []    "
		"    []      "
		"  []        "
		"[]          "
		"[][][][][][]"
		"            "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7828>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][][][][]"
		"            []"
		"          []  "
		"        []    "
		"      [][]    "
		"      []      "
		"    []        "
		"  [][]        "
		"  []          "
		"[]            "
		"[][][][][][][]"
		"              "
		"  [][][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7829>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][][][]"
		"          []"
		"        []  "
		"      []    "
		"    []      "
		"  []        "
		"[]          "
		"[][][][][][]"
		"            "
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7830>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]          "
		"[]          "
		"[]          "
		"[]  [][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"            "
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7831>
{
	using next = Constant<4>;
	using width = Constant<5>;
	using height = Constant<12>;
	using x = Constant<-1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]  [][]"
		"          "
		"    []    "
		"    []    "
		"  [][][]  "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"    []    "
		"      [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7832>
{
	using next = Constant<10>;
	using width = Constant<9>;
	using height = Constant<12>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]      "
		"      []    []    "
		"        [][]      "
		"                  "
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"  []    []    []  "
		"  []    []    []  "
		"  []  []  []  []  "
		"    []      []    "
		"    []      []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7833>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<15>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    [][]      "
		"  []    []    "
		"    [][]      "
		"              "
		"[]          []"
		"[][]        []"
		"  []      []  "
		"  []      []  "
		"    []    []  "
		"    []  []    "
		"      [][]    "
		"      []      "
		"      []      "
		"    [][]      "
		"  [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7840>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"                  "
		"        [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7841>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"
		"              "
		"    [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7844>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<17>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []      "
		"        []        "
		"                  "
		"        [][]      "
		"      []    []    "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7845>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []    "
		"      []      "
		"              "
		"    [][]      "
		"  []    []    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7846>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<17>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []          "
		"        []        "
		"                  "
		"        [][]      "
		"      []    []    "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7847>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []        "
		"      []      "
		"              "
		"    [][]      "
		"  []    []    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7850>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<17>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]  []    "
		"    []  [][]      "
		"                  "
		"        [][]      "
		"      []    []    "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7851>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  []  "
		"  []  [][]    "
		"              "
		"    [][]      "
		"  []    []    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7852>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<16>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"        []        "
		"      []  []      "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"                  "
		"        [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7853>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"      []      "
		"    []  []    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"
		"              "
		"    [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7854>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<17>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []      "
		"        []        "
		"                  "
		"    []      []    "
		"      [][][]      "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7855>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []    "
		"      []      "
		"              "
		"  []      []  "
		"    [][][]    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7856>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<17>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []          "
		"        []        "
		"                  "
		"    []      []    "
		"      [][][]      "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7857>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []        "
		"      []      "
		"              "
		"  []      []  "
		"    [][][]    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7860>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<17>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]  []    "
		"    []  [][]      "
		"                  "
		"    []      []    "
		"      [][][]      "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7861>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  []  "
		"  []  [][]    "
		"              "
		"  []      []  "
		"    [][][]    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7862>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<16>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"    []      []    "
		"      [][][]      "
		"                  "
		"        []        "
		"      [][][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"                  "
		"        [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7863>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  []      []  "
		"    [][][]    "
		"              "
		"  [][][][]    "
		"[][]    [][]  "
		"          []  "
		"  [][][][][]  "
		"[][]      []  "
		"[]        []  "
		"[][]    [][]  "
		"  [][][]  [][]"
		"              "
		"    [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7864>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"
		"              "
		"    [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7865>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "
		"            "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7868>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  []  "
		"  []  [][]    "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7869>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  []"
		"  []  [][]  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7870>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<17>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []    "
		"      []      "
		"              "
		"      [][]    "
		"    []    []  "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7871>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"    [][]    "
		"  []    []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7872>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<17>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []        "
		"      []      "
		"              "
		"      [][]    "
		"    []    []  "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7873>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      "
		"      []    "
		"            "
		"    [][]    "
		"  []    []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7876>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<17>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  []  "
		"  []  [][]    "
		"              "
		"      [][]    "
		"    []    []  "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7877>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  []"
		"  []  [][]  "
		"            "
		"    [][]    "
		"  []    []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7878>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"    []        "
		"  []  []      "
		"              "
		"[][][][][][][]"
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][]  "
		"[]            "
		"[]            "
		"[]            "
		"[]            "
		"[][][][][][][]"
		"              "
		"    [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7879>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"      []    "
		"    []  []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[][][][][][]"
		"[]          "
		"[]          "
		"[][]    [][]"
		"  [][][][]  "
		"            "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7882>
{
	using next = Constant<4>;
	using width = Constant<2>;
	using height = Constant<13>;
	using x = Constant<2>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"    "
		"[][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7883>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]  "
		"[]  "
		"    "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"[]  "
		"    "
		"[][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7884>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "
		"                  "
		"        [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7885>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "
		"            "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7888>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<17>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []      "
		"        []        "
		"                  "
		"        [][]      "
		"      []    []    "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7889>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []    "
		"    []      "
		"            "
		"    [][]    "
		"  []    []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7890>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<17>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []          "
		"        []        "
		"                  "
		"        [][]      "
		"      []    []    "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7891>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    []      "
		"      []    "
		"            "
		"    [][]    "
		"  []    []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7894>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<17>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]  []    "
		"    []  [][]      "
		"                  "
		"        [][]      "
		"      []    []    "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7895>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][]  []"
		"  []  [][]  "
		"            "
		"    [][]    "
		"  []    []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7896>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<16>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"        []        "
		"      []  []      "
		"                  "
		"      [][][]      "
		"  [][]      [][]  "
		"  []          []  "
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][]      [][]  "
		"      [][][]      "
		"                  "
		"        [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7897>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"      []    "
		"    []  []  "
		"            "
		"  [][][][]  "
		"[][]    [][]"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][][]  "
		"            "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7898>
{
	using next = Constant<11>;
	using width = Constant<10>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"            []      "
		"          []        "
		"                    "
		"      [][][]    [][]"
		"  [][]      [][]  []"
		"  []          [][]  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"  []          []    "
		"  [][]      [][]    "
		"      [][][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7899>
{
	using next = Constant<8>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []      "
		"      []        "
		"                "
		"  [][][][]  [][]"
		"[][]    [][]  []"
		"[]        [][]  "
		"[]        []    "
		"[]        []    "
		"[]        []    "
		"[][]    [][]    "
		"  [][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7900>
{
	using next = Constant<11>;
	using width = Constant<10>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []          "
		"          []        "
		"                    "
		"      [][][]    [][]"
		"  [][]      [][]  []"
		"  []          [][]  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"  []          []    "
		"  [][]      [][]    "
		"      [][][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7901>
{
	using next = Constant<8>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []        "
		"        []      "
		"                "
		"  [][][][]  [][]"
		"[][]    [][]  []"
		"[]        [][]  "
		"[]        []    "
		"[]        []    "
		"[]        []    "
		"[][]    [][]    "
		"  [][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7904>
{
	using next = Constant<11>;
	using width = Constant<10>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]  []    "
		"      []  [][]      "
		"                    "
		"      [][][]    [][]"
		"  [][]      [][]  []"
		"  []          [][]  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"  []          []    "
		"  [][]      [][]    "
		"      [][][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7905>
{
	using next = Constant<8>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]  []  "
		"    []  [][]    "
		"                "
		"  [][][][]  [][]"
		"[][]    [][]  []"
		"[]        [][]  "
		"[]        []    "
		"[]        []    "
		"[]        []    "
		"[][]    [][]    "
		"  [][][][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7906>
{
	using next = Constant<11>;
	using width = Constant<10>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"      [][][]    [][]"
		"  [][]      [][]  []"
		"  []          [][]  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"[]              []  "
		"  []          []    "
		"  [][]      [][]    "
		"      [][][]        "
		"                    "
		"        [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7907>
{
	using next = Constant<8>;
	using width = Constant<8>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"  [][][][]  [][]"
		"[][]    [][]  []"
		"[]        [][]  "
		"[]        []    "
		"[]        []    "
		"[]        []    "
		"[][]    [][]    "
		"  [][][][]      "
		"                "
		"    [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7908>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"[]            []"
		"  []        []  "
		"    [][][][]    "
		"                "
		"      [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7909>
{
	using next = Constant<7>;
	using width = Constant<6>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[]        []"
		"[][]    [][]"
		"  [][][]  []"
		"            "
		"    [][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7912>
{
	using next = Constant<10>;
	using width = Constant<10>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"            []      "
		"          []        "
		"                    "
		"[]            [][][]"
		"[]            []  []"
		"[]            [][]  "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"  []        []      "
		"    [][][][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7913>
{
	using next = Constant<7>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"          []    "
		"        []      "
		"                "
		"[]        [][][]"
		"[]        []  []"
		"[]        [][]  "
		"[]        []    "
		"[]        []    "
		"[]        []    "
		"[][]    [][]    "
		"  [][][]  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7914>
{
	using next = Constant<10>;
	using width = Constant<10>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []          "
		"          []        "
		"                    "
		"[]            [][][]"
		"[]            []  []"
		"[]            [][]  "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"  []        []      "
		"    [][][][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7915>
{
	using next = Constant<7>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []        "
		"        []      "
		"                "
		"[]        [][][]"
		"[]        []  []"
		"[]        [][]  "
		"[]        []    "
		"[]        []    "
		"[]        []    "
		"[][]    [][]    "
		"  [][][]  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7918>
{
	using next = Constant<10>;
	using width = Constant<10>;
	using height = Constant<14>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]  []    "
		"      []  [][]      "
		"                    "
		"[]            [][][]"
		"[]            []  []"
		"[]            [][]  "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"  []        []      "
		"    [][][][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7919>
{
	using next = Constant<7>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]  []  "
		"    []  [][]    "
		"                "
		"[]        [][][]"
		"[]        []  []"
		"[]        [][]  "
		"[]        []    "
		"[]        []    "
		"[]        []    "
		"[][]    [][]    "
		"  [][][]  []    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7920>
{
	using next = Constant<10>;
	using width = Constant<10>;
	using height = Constant<13>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]            [][][]"
		"[]            []  []"
		"[]            [][]  "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"[]            []    "
		"  []        []      "
		"    [][][][]        "
		"                    "
		"      [][]          "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7921>
{
	using next = Constant<7>;
	using width = Constant<8>;
	using height = Constant<10>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]        [][][]"
		"[]        []  []"
		"[]        [][]  "
		"[]        []    "
		"[]        []    "
		"[]        []    "
		"[][]    [][]    "
		"  [][][]  []    "
		"                "
		"    [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7922>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      []          "
		"        []        "
		"                  "
		"[]              []"
		"[][]          [][]"
		"  []          []  "
		"    []      []    "
		"    []      []    "
		"      []  []      "
		"      [][][]      "
		"        []        "
		"        []        "
		"        []        "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7923>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    []        "
		"      []      "
		"              "
		"[]          []"
		"[][]        []"
		"  []      []  "
		"  []      []  "
		"    []    []  "
		"    []  []    "
		"      [][]    "
		"      []      "
		"      []      "
		"    [][]      "
		"  [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7924>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[]              []"
		"[][]          [][]"
		"  []          []  "
		"    []      []    "
		"    []      []    "
		"      []  []      "
		"      [][][]      "
		"        []        "
		"        []        "
		"        []        "
		"        []        "
		"                  "
		"        [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7925>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<13>;
	using x = Constant<0>;
	using y = Constant<-5>;
	using bit_map = decltype(
		"[]          []"
		"[][]        []"
		"  []      []  "
		"  []      []  "
		"    []    []  "
		"    []  []    "
		"      [][]    "
		"      []      "
		"      []      "
		"    [][]      "
		"  [][]        "
		"              "
		"    [][]      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7928>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"      [][]  []    "
		"    []  [][]      "
		"                  "
		"[]              []"
		"[][]          [][]"
		"  []          []  "
		"    []      []    "
		"    []      []    "
		"      []  []      "
		"      [][][]      "
		"        []        "
		"        []        "
		"        []        "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<7929>
{
	using next = Constant<7>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"    [][]  []  "
		"  []  [][]    "
		"              "
		"[]          []"
		"[][]        []"
		"  []      []  "
		"  []      []  "
		"    []    []  "
		"    []  []    "
		"      [][]    "
		"      []      "
		"      []      "
		"    [][]      "
		"  [][]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8192>
{
	using next = Constant<7>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8193>
{
	using next = Constant<14>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8194>
{
	using next = Constant<7>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8195>
{
	using next = Constant<14>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8196>
{
	using next = Constant<5>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8197>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8198>
{
	using next = Constant<2>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8199>
{
	using next = Constant<8>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8200>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8201>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8202>
{
	using next = Constant<1>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8203>
{
	using next = Constant<0>;
	using width = Constant<1>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8208>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8209>
{
	using next = Constant<4>;
	using width = Constant<3>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8210>
{
	using next = Constant<8>;
	using width = Constant<8>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8211>
{
	using next = Constant<8>;
	using width = Constant<8>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8212>
{
	using next = Constant<14>;
	using width = Constant<14>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][][][][][][][][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8213>
{
	using next = Constant<14>;
	using width = Constant<14>;
	using height = Constant<1>;
	using x = Constant<0>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][][][][][][][][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8216>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<3>;
	using x = Constant<0>;
	using y = Constant<8>;
	using bit_map = decltype(
		"  []"
		"[]  "
		"[][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8217>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<3>;
	using x = Constant<1>;
	using y = Constant<8>;
	using bit_map = decltype(
		"[][]"
		"  []"
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8218>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<3>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][]"
		"  []"
		"[]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8219>
{
	using next = Constant<3>;
	using width = Constant<2>;
	using height = Constant<3>;
	using x = Constant<1>;
	using y = Constant<8>;
	using bit_map = decltype(
		"[][]"
		"[]  "
		"  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8220>
{
	using next = Constant<6>;
	using width = Constant<5>;
	using height = Constant<3>;
	using x = Constant<0>;
	using y = Constant<8>;
	using bit_map = decltype(
		"  []    []"
		"[]    []  "
		"[][]  [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8221>
{
	using next = Constant<6>;
	using width = Constant<5>;
	using height = Constant<3>;
	using x = Constant<1>;
	using y = Constant<8>;
	using bit_map = decltype(
		"[][]  [][]"
		"  []    []"
		"[]    []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8222>
{
	using next = Constant<5>;
	using width = Constant<5>;
	using height = Constant<3>;
	using x = Constant<0>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"[][]  [][]"
		"  []    []"
		"[]    []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8223>
{
	using next = Constant<6>;
	using width = Constant<5>;
	using height = Constant<3>;
	using x = Constant<1>;
	using y = Constant<8>;
	using bit_map = decltype(
		"[][]  [][]"
		"[]    []  "
		"  []    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8224>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"      []      "
		"      []      "
		"      []      "
		"      []      "
		"[][][][][][][]"
		"      []      "
		"      []      "
		"      []      "
		"      []      "
		"      []      "
		"      []      "
		"      []      "
		"      []      "
		"      []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8225>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"      []      "
		"      []      "
		"      []      "
		"      []      "
		"[][][][][][][]"
		"      []      "
		"      []      "
		"      []      "
		"      []      "
		"[][][][][][][]"
		"      []      "
		"      []      "
		"      []      "
		"      []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8226>
{
	using next = Constant<5>;
	using width = Constant<3>;
	using height = Constant<4>;
	using x = Constant<1>;
	using y = Constant<3>;
	using bit_map = decltype(
		"  []  "
		"[][][]"
		"[][][]"
		"  []  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8230>
{
	using next = Constant<15>;
	using width = Constant<12>;
	using height = Constant<1>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]      [][]      [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8240>
{
	using next = Constant<13>;
	using width = Constant<11>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"              []      "
		"  [][]      []        "
		"[]    []    []        "
		"[]    []  []          "
		"  [][]    []          "
		"        []            "
		"      []              "
		"      []  [][]  [][]  "
		"    []  []    []    []"
		"    []  []    []    []"
		"  []      [][]  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8249>
{
	using next = Constant<5>;
	using width = Constant<3>;
	using height = Constant<5>;
	using x = Constant<1>;
	using y = Constant<2>;
	using bit_map = decltype(
		"    []"
		"  []  "
		"[]    "
		"  []  "
		"    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8250>
{
	using next = Constant<5>;
	using width = Constant<3>;
	using height = Constant<5>;
	using x = Constant<1>;
	using y = Constant<2>;
	using bit_map = decltype(
		"[]    "
		"  []  "
		"    []"
		"  []  "
		"[]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8260>
{
	using next = Constant<3>;
	using width = Constant<5>;
	using height = Constant<10>;
	using x = Constant<-1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []"
		"        []"
		"      []  "
		"      []  "
		"    []    "
		"    []    "
		"  []      "
		"  []      "
		"[]        "
		"[]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8321>
{
	using next = Constant<5>;
	using width = Constant<2>;
	using height = Constant<6>;
	using x = Constant<1>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  []"
		"[][]"
		"  []"
		"  []"
		"  []"
		"  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8322>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<6>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][]  "
		"[]    []"
		"      []"
		"    []  "
		"  []    "
		"[][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8323>
{
	using next = Constant<5>;
	using width = Constant<4>;
	using height = Constant<6>;
	using x = Constant<0>;
	using y = Constant<-3>;
	using bit_map = decltype(
		"  [][]  "
		"[]    []"
		"    []  "
		"      []"
		"[]    []"
		"  [][]  "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8357>
{
	using next = Constant<11>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-1>;
	using bit_map = decltype(
		"            []    "
		"            []    "
		"[]  [][]  [][][]  "
		"[][]    [][]    []"
		"[]      [][]    []"
		"[]      []      []"
		"[]      []      []"
		"[]      []      []"
		"[]    [][]      []"
		"[]    [][]      []"
		"      []          "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8358>
{
	using next = Constant<10>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]          []"
		"[]  []        []"
		"[]  []        []"
		"[]    []      []"
		"[][][][][][][][]"
		"[]      []    []"
		"[][][][][][][][]"
		"[]        []  []"
		"[]        []  []"
		"[]          [][]"
		"[]          [][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8361>
{
	using next = Constant<13>;
	using width = Constant<13>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]          []          []"
		"[]          []          []"
		"[]        []  []        []"
		"  []      []  []      []  "
		"  []    [][][][][][]  []  "
		"  []      []  []      []  "
		"    []  [][][][][][][]    "
		"    []  []      []  []    "
		"    []  []      []  []    "
		"      []          []      "
		"      []          []      "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8364>
{
	using next = Constant<10>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][][]    "
		"    [][]      [][]"
		"    []          []"
		"  []              "
		"[][][][][][]      "
		"  []              "
		"[][][][][][]      "
		"  []              "
		"    []          []"
		"    [][]      [][]"
		"        [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8365>
{
	using next = Constant<9>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]          []  "
		"[]        []    "
		"[]      []      "
		"[]    []        "
		"[]  []          "
		"[][][][][][][][]"
		"[]    []        "
		"[]      []      "
		"[]        []    "
		"[]          []  "
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8451>
{
	using next = Constant<16>;
	using width = Constant<14>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]            [][][]    "
		"[]    []      [][]      [][]"
		"[]    []      []          []"
		"  [][]      []              "
		"            []              "
		"            []              "
		"            []              "
		"            []              "
		"              []          []"
		"              [][]      [][]"
		"                  [][][]    "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8457>
{
	using next = Constant<14>;
	using width = Constant<13>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"  [][]      [][][][][][][]"
		"[]    []    []            "
		"[]    []    []            "
		"  [][]      []            "
		"            []            "
		"            [][][][][][]  "
		"            []            "
		"            []            "
		"            []            "
		"            []            "
		"            []            "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8482>
{
	using next = Constant<13>;
	using width = Constant<11>;
	using height = Constant<6>;
	using x = Constant<1>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][][][][]  []      []"
		"    []      [][]  [][]"
		"    []      []  []  []"
		"    []      []  []  []"
		"    []      []  []  []"
		"    []      []  []  []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8490>
{
	using next = Constant<9>;
	using width = Constant<8>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]          []  "
		"[]        []    "
		"[]      []      "
		"[]    []        "
		"[]  []          "
		"[][][]          "
		"[]    []        "
		"[]      []      "
		"[]        []    "
		"[]          []  "
		"[]            []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8491>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<14>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]      "
		"      []    []    "
		"      []    []    "
		"        [][]      "
		"        [][]      "
		"      []  []      "
		"      []  []      "
		"    []      []    "
		"    []      []    "
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"[]              []"
		"[]              []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8498>
{
	using next = Constant<8>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"            []"
		"            []"
		"            []"
		"            []"
		"            []"
		"  [][][][][][]"
		"            []"
		"            []"
		"            []"
		"            []"
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8704>
{
	using next = Constant<9>;
	using width = Constant<9>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[]              []"
		"[]              []"
		"  []          []  "
		"  [][][][][][][]  "
		"  []          []  "
		"    []      []    "
		"    []      []    "
		"      []  []      "
		"      []  []      "
		"      [][][]      "
		"        []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8707>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][][]"
		"            []"
		"            []"
		"            []"
		"            []"
		"  [][][][][][]"
		"            []"
		"            []"
		"            []"
		"            []"
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8708>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][][][][][][]"
		"          [][]"
		"        []  []"
		"        []  []"
		"        []  []"
		"  [][][][][][]"
		"      []    []"
		"      []    []"
		"    []      []"
		"    []      []"
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8722>
{
	using next = Constant<9>;
	using width = Constant<7>;
	using height = Constant<1>;
	using x = Constant<1>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8725>
{
	using next = Constant<3>;
	using width = Constant<5>;
	using height = Constant<10>;
	using x = Constant<-1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        []"
		"        []"
		"      []  "
		"      []  "
		"    []    "
		"    []    "
		"  []      "
		"  []      "
		"[]        "
		"[]        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8729>
{
	using next = Constant<4>;
	using width = Constant<2>;
	using height = Constant<1>;
	using x = Constant<1>;
	using y = Constant<4>;
	using bit_map = decltype(
		"[][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8758>
{
	using next = Constant<3>;
	using width = Constant<1>;
	using height = Constant<8>;
	using x = Constant<1>;
	using y = Constant<0>;
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

template<>
struct HelveticaMedium14::Glyphe<8793>
{
	using next = Constant<9>;
	using width = Constant<6>;
	using height = Constant<6>;
	using x = Constant<1>;
	using y = Constant<3>;
	using bit_map = decltype(
		"      []    "
		"    []  []  "
		"            "
		"[][][][][][]"
		"            "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8794>
{
	using next = Constant<9>;
	using width = Constant<6>;
	using height = Constant<6>;
	using x = Constant<1>;
	using y = Constant<3>;
	using bit_map = decltype(
		"    []  []  "
		"      []    "
		"            "
		"[][][][][][]"
		"            "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8800>
{
	using next = Constant<9>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-1>;
	using bit_map = decltype(
		"        []  "
		"        []  "
		"      []    "
		"      []    "
		"[][][][][][]"
		"    []      "
		"[][][][][][]"
		"    []      "
		"  []        "
		"  []        "
		"  []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8801>
{
	using next = Constant<9>;
	using width = Constant<6>;
	using height = Constant<5>;
	using x = Constant<0>;
	using y = Constant<2>;
	using bit_map = decltype(
		"[][][][][][]"
		"            "
		"[][][][][][]"
		"            "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8802>
{
	using next = Constant<9>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<-1>;
	using bit_map = decltype(
		"        []  "
		"        []  "
		"      []    "
		"[][][][][][]"
		"      []    "
		"[][][][][][]"
		"    []      "
		"[][][][][][]"
		"  []        "
		"  []        "
		"  []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8804>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<7>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"        [][]"
		"    [][]    "
		"[][]        "
		"    [][]    "
		"        [][]"
		"            "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8805>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<7>;
	using x = Constant<1>;
	using y = Constant<0>;
	using bit_map = decltype(
		"[][]        "
		"    [][]    "
		"        [][]"
		"    [][]    "
		"[][]        "
		"            "
		"[][][][][][]"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8814>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-1>;
	using bit_map = decltype(
		"        []  "
		"        []  "
		"      []    "
		"      [][][]"
		"    [][]    "
		"[][][]      "
		"    [][]    "
		"    []  [][]"
		"  []        "
		"  []        "
		"  []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8815>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-1>;
	using bit_map = decltype(
		"        []  "
		"        []  "
		"      []    "
		"[][]  []    "
		"    [][]    "
		"    []  [][]"
		"    [][]    "
		"[][][]      "
		"  []        "
		"  []        "
		"  []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8816>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"        []  "
		"        []  "
		"      [][][]"
		"    [][]    "
		"[][]  []    "
		"    [][]    "
		"    []  [][]"
		"    []      "
		"[][][][][][]"
		"  []        "
		"  []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<8817>
{
	using next = Constant<8>;
	using width = Constant<6>;
	using height = Constant<11>;
	using x = Constant<1>;
	using y = Constant<-2>;
	using bit_map = decltype(
		"        []  "
		"        []  "
		"[][]  []    "
		"    [][]    "
		"      [][][]"
		"    [][]    "
		"[][][]      "
		"    []      "
		"[][][][][][]"
		"  []        "
		"  []        "_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<-1>
{
	using next = Constant<6>;
	using width = Constant<5>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][]"
		"  []      "
		"  []      "
		"[][][]  []"
		"  []    []"
		"  []    []"
		"  []    []"
		"  []    []"
		"  []    []"
		"  []    []"
		"  []    []"_make_bitmap);
};

template<>
struct HelveticaMedium14::Glyphe<-2>
{
	using next = Constant<6>;
	using width = Constant<5>;
	using height = Constant<11>;
	using x = Constant<0>;
	using y = Constant<0>;
	using bit_map = decltype(
		"    [][][]"
		"  []    []"
		"  []    []"
		"[][][]  []"
		"  []    []"
		"  []    []"
		"  []    []"
		"  []    []"
		"  []    []"
		"  []    []"
		"  []    []"_make_bitmap);
};


} //namespace font

} //namespace pixel_display

