#include "catch.h"
#include "util.h"
#include <unistd.h>

#include <pixel_display/pixel_font.h>

using namespace pixel_display;
using namespace pixel_display::encoding;
using type::BitMap;


namespace
{

struct TestFont
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
struct TestFont::Glyphe<0>
{
	using next = type::Constant<uint8_t, 14>;
	using width = type::Constant<uint8_t, 11>;
	using height = type::Constant<uint8_t, 13>;
	using x = type::Constant<int8_t, 1>;
	using y = type::Constant<int8_t, 0>;
	using bit_map = decltype(
		"[]  []  []  []  []  []"
		"                      "
		"[]                  []"
		"                      "
		"[]                  []"
		"                      "
		"[]                  []"
		"                      "
		"[]                  []"
		"                      "
		"[]                  []"
		"                      "
		"[]  []  []  []  []  []"_make_bitmap);
};



template<>
struct TestFont::Glyphe<40>
{
	using next = type::Constant<uint8_t, 6>;
	using width = type::Constant<uint8_t, 4>;
	using height = type::Constant<uint8_t, 18>;
	using x = type::Constant<int8_t, 0>;
	using y = type::Constant<int8_t, -4>;
	using bit_map = decltype(
		"      []"
		"    [][]"
		"  [][]  "
		"  [][]  "
		"[][]    "
		"[][]    "
		"[][]    "
		"[][]    "
		"[][]    "
		"[][]    "
		"[][]    "
		"[][]    "
		"[][]    "
		"[][]    "
		"  [][]  "
		"  [][]  "
		"    [][]"
		"      []"_make_bitmap);
};

template<>
struct TestFont::Glyphe<41>
{
	using next = type::Constant<uint8_t, 6>;
	using width = type::Constant<uint8_t, 4>;
	using height = type::Constant<uint8_t, 18>;
	using x = type::Constant<int8_t, 1>;
	using y = type::Constant<int8_t, -4>;
	using bit_map = decltype(
		"[]      "
		"[][]    "
		"  [][]  "
		"  [][]  "
		"    [][]"
		"    [][]"
		"    [][]"
		"    [][]"
		"    [][]"
		"    [][]"
		"    [][]"
		"    [][]"
		"    [][]"
		"    [][]"
		"  [][]  "
		"  [][]  "
		"[][]    "
		"[]      "_make_bitmap);
};



//------------------------------------------------------------------------------

// using Tab_t =
// 	MakeFontTable<
// 		TestFont,
// 		encoding::Simple, 0, '(', ')'>;




} //namespace



TEST_CASE()
{
	// REQUIRE(HelveticaMedium20_t::count() == 0);

	// REQUIRE(Tab_t::count() == 3);
	// REQUIRE(Tab_t::size() == 63);

	// REQUIRE(Tab_t::has('('));
	// REQUIRE_FALSE(Tab_t::has('x'));

	// REQUIRE(
	// 	Tab_t::bounds('(') ==
	// 	(type::Outline{
	// 		type::Size{type::Width{4}, type::Height{18}},
	// 		type::Point{type::X{0}, type::Y{-4}}}));

	// REQUIRE(
	// 	(encode<byte_count<TestFont::Glyphe<0>>(),1>(TestFont::Glyphe<0>::bit_map{})) ==
	// 	Data<18>({85, 5, 64, 0, 1, 16, 64, 0, 4, 16, 0, 1, 4, 64, 0, 1, 80, 85}));

	// REQUIRE(
	// 	encode<1>(TestFont::Glyphe<40>::bit_map{}) ==
	// 	Data<9>({0xc8, 0x66, 0x33, 0x33, 0x33, 0x33, 0x33, 0x66, 0x8c}));

	// REQUIRE(
	// 	encode<1>(TestFont::Glyphe<41>::bit_map{}) ==
	// 	Data<9>({49, 102, 204, 204, 204, 204, 204, 102, 19}));

	// REQUIRE(
	// 	(bitmap_cat<TestFont::Glyphe<0>::bit_map, TestFont::Glyphe<40>::bit_map>::type::byte_count)
	// 	== TestFont::Glyphe<40>::bit_map::byte_count + TestFont::Glyphe<0>::bit_map::byte_count + 1);

	// REQUIRE(
	// 	encode<2>(bitmap_cat<TestFont::Glyphe<0>::bit_map, TestFont::Glyphe<40>::bit_map>::type{}) ==
	// 	Data<27>({
	// 		85, 5, 64, 0, 1, 16, 64, 0, 4, 16, 0, 1, 4, 64, 0, 1, 80, 85,
	// 		0xc8, 0x66, 0x33, 0x33, 0x33, 0x33, 0x33, 0x66, 0x8c}));

	// REQUIRE(
	// 	encode<2>(
	// 		flatten_t<
	// 			TestFont::Glyphe<0>,
	// 			TestFont::Glyphe<40>,
	// 			TestFont::Glyphe<41>>{}) ==
	// 	Data<36>({
	// 		85, 5, 64, 0, 1, 16, 64, 0, 4, 16, 0, 1, 4, 64, 0, 1, 80, 85,
	// 		0xc8, 0x66, 0x33, 0x33, 0x33, 0x33, 0x33, 0x66, 0x8c,
	// 		49, 102, 204, 204, 204, 204, 204, 102, 19}));


	REQUIRE((detail::index_of<
		TestFont::Glyphe<0>,
		detail::TypeList<
			TestFont::Glyphe<0>,
			TestFont::Glyphe<40>,
			TestFont::Glyphe<41>>>()) == 0);

	REQUIRE((detail::index_of<
		TestFont::Glyphe<40>,
		detail::TypeList<
			TestFont::Glyphe<0>,
			TestFont::Glyphe<40>,
			TestFont::Glyphe<41>>>()) == 1);

	REQUIRE((detail::index_of<
		TestFont::Glyphe<41>,
		detail::TypeList<
			TestFont::Glyphe<0>,
			TestFont::Glyphe<40>,
			TestFont::Glyphe<41>>>()) == 2);

	REQUIRE((get_offset<
		TestFont::Glyphe<0>,
		TestFont::Glyphe<0>,
		TestFont::Glyphe<40>,
		TestFont::Glyphe<41>>()) == 0);

	REQUIRE((get_offset<
		TestFont::Glyphe<40>,
		TestFont::Glyphe<0>,
		TestFont::Glyphe<40>,
		TestFont::Glyphe<41>>()) == 18);

	REQUIRE((get_offset<
		TestFont::Glyphe<41>,
		TestFont::Glyphe<0>,
		TestFont::Glyphe<40>,
		TestFont::Glyphe<41>>()) == 27);


	// REQUIRE(Tab_t::get_offset_(0) == 0);
	// REQUIRE(Tab_t::get_offset_(40) == 18);
	// REQUIRE(Tab_t::get_offset_(41) == 27);
}



TEST_CASE("shift buffer left")
{
	REQUIRE(
		shift("000011111111000000000000"_buf, type::X{0}) ==
		      "000011111111000000000000"_buf);

	REQUIRE(
		shift("101010101010101010101010"_buf, type::X{1}) ==
		      "010101010101010101010101"_buf);

	REQUIRE(
		shift("000011111110000000000000"_buf, type::X{4}) ==
		      "000000001111111000000000"_buf);

	REQUIRE(
		shift("100011111111000010000000"_buf, type::X{7}) ==
		      "000000010001111111100001"_buf);

	REQUIRE(
		shift("100011111111000010000000"_buf, type::X{9}) ==
		      "000000000100011111111000"_buf);
}

TEST_CASE("shift buffer right")
{
	REQUIRE(
		shift("000011111111000000000000"_buf, type::X{-0}) ==
		      "000011111111000000000000"_buf);

	REQUIRE(
		shift("101010101010101010101010"_buf, type::X{-1}) ==
		      "010101010101010101010100"_buf);

	REQUIRE(
		shift("000011111110000000000000"_buf, type::X{-4}) ==
		      "111111100000000000000000"_buf);

	REQUIRE(
		shift("100011111111000010000000"_buf, type::X{-7}) ==
		      "111110000100000000000000"_buf);

	REQUIRE(
		shift("100011111111000010000000"_buf, type::X{-8}) ==
		      "111100001000000000000000"_buf);

	REQUIRE(
		shift("100011111111000010000000"_buf, type::X{-9}) ==
		      "111000010000000000000000"_buf);

	REQUIRE(
		shift("100011111111000001000000"_buf, type::X{-10}) ==
		      "110000010000000000000000"_buf);

		REQUIRE(
		shift("100011111111000001000000"_buf, type::X{-16}) ==
		      "010000000000000000"_buf);
}


TEST_CASE("shift")
{
	REQUIRE(
		shift("000011111111000000000000"_buf, type::X{1}) ==
		"000001111111100000000000"_buf);

	REQUIRE(
		shift("000011111111000000000000"_buf, type::X{-1}) ==
		"000111111110000000000000"_buf);
}

TEST_CASE("glyphe mask")
{
	REQUIRE(
		(glyphe_mask<std::array<uint8_t,3>>(3, type::X{0})) ==
		"111000000000000000000000"_buf);

	REQUIRE(
		(glyphe_mask<std::array<uint8_t,3>>(3, type::X{6})) ==
		"000000111000000000000000"_buf);

	REQUIRE(
		(glyphe_mask<std::array<uint8_t,3>>(13, type::X{0})) ==
		"111111111111100000000000"_buf);

		REQUIRE(
		(glyphe_mask<std::array<uint8_t,3>>(13, type::X{7})) ==
		"000000011111111111110000"_buf);
}

TEST_CASE("or buffers")
{
	REQUIRE(
		("111000000000000000000000"_buf | "000000111000000000000000"_buf)
		== "111000111000000000000000"_buf);

	REQUIRE(
		("111000000000000000000110"_buf | "000000111000000000000000"_buf)
		== "111000111000000000000110"_buf);
}

TEST_CASE("and buffers")
{
	REQUIRE(
		("111111110000000000100000"_buf & "000000111000000001110000"_buf)
		== "000000110000000000100000"_buf);
}




TEST_CASE("start byte index")
{
	REQUIRE(begin_byte_index(type::Width{1}, type::Y{0}) == 0);
	REQUIRE(begin_byte_index(type::Width{1}, type::Y{1}) == 0);
	REQUIRE(begin_byte_index(type::Width{1}, type::Y{8}) == 1);
	REQUIRE(begin_byte_index(type::Width{1}, type::Y{15}) == 1);
	REQUIRE(begin_byte_index(type::Width{1}, type::Y{16}) == 2);

	REQUIRE(begin_byte_index(type::Width{5}, type::Y{0}) == 0);
	REQUIRE(begin_byte_index(type::Width{5}, type::Y{1}) == 0);
	REQUIRE(begin_byte_index(type::Width{5}, type::Y{2}) == 1);
	REQUIRE(begin_byte_index(type::Width{5}, type::Y{3}) == 1);
	REQUIRE(begin_byte_index(type::Width{5}, type::Y{4}) == 2);
	REQUIRE(begin_byte_index(type::Width{5}, type::Y{5}) == 3);

	REQUIRE(begin_byte_index(type::Width{8}, type::Y{0}) == 0);
	REQUIRE(begin_byte_index(type::Width{8}, type::Y{1}) == 1);
	REQUIRE(begin_byte_index(type::Width{8}, type::Y{2}) == 2);
	REQUIRE(begin_byte_index(type::Width{8}, type::Y{3}) == 3);
	REQUIRE(begin_byte_index(type::Width{8}, type::Y{4}) == 4);
	REQUIRE(begin_byte_index(type::Width{8}, type::Y{5}) == 5);

	REQUIRE(begin_byte_index(type::Width{13}, type::Y{0}) == 0);
	REQUIRE(begin_byte_index(type::Width{13}, type::Y{1}) == 1);
	REQUIRE(begin_byte_index(type::Width{13}, type::Y{2}) == 3);
	REQUIRE(begin_byte_index(type::Width{13}, type::Y{3}) == 4);
	REQUIRE(begin_byte_index(type::Width{13}, type::Y{4}) == 6);
	REQUIRE(begin_byte_index(type::Width{13}, type::Y{5}) == 8);

	REQUIRE(begin_byte_index(type::Width{16}, type::Y{0}) == 0);
	REQUIRE(begin_byte_index(type::Width{16}, type::Y{1}) == 2);
	REQUIRE(begin_byte_index(type::Width{16}, type::Y{2}) == 4);
	REQUIRE(begin_byte_index(type::Width{16}, type::Y{3}) == 6);
	REQUIRE(begin_byte_index(type::Width{16}, type::Y{4}) == 8);
	REQUIRE(begin_byte_index(type::Width{16}, type::Y{5}) == 10);

	REQUIRE(begin_byte_index(type::Width{27}, type::Y{0}) == 0);
	REQUIRE(begin_byte_index(type::Width{27}, type::Y{1}) == 3);
	REQUIRE(begin_byte_index(type::Width{27}, type::Y{2}) == 6);
	REQUIRE(begin_byte_index(type::Width{27}, type::Y{3}) == 10);
	REQUIRE(begin_byte_index(type::Width{27}, type::Y{4}) == 13);
	REQUIRE(begin_byte_index(type::Width{27}, type::Y{5}) == 16);

	REQUIRE(begin_byte_index(type::Width{32}, type::Y{0}) == 0);
	REQUIRE(begin_byte_index(type::Width{32}, type::Y{1}) == 4);
	REQUIRE(begin_byte_index(type::Width{32}, type::Y{2}) == 8);
	REQUIRE(begin_byte_index(type::Width{32}, type::Y{3}) == 12);
	REQUIRE(begin_byte_index(type::Width{32}, type::Y{4}) == 16);
	REQUIRE(begin_byte_index(type::Width{32}, type::Y{5}) == 20);

	REQUIRE(begin_byte_index(type::Width{33}, type::Y{5}) == 20);

	REQUIRE(begin_byte_index(type::Width{64}, type::Y{0}) == 0);
	REQUIRE(begin_byte_index(type::Width{64}, type::Y{1}) == 8);
	REQUIRE(begin_byte_index(type::Width{64}, type::Y{2}) == 16);
	REQUIRE(begin_byte_index(type::Width{64}, type::Y{3}) == 24);
	REQUIRE(begin_byte_index(type::Width{64}, type::Y{4}) == 32);
	REQUIRE(begin_byte_index(type::Width{64}, type::Y{5}) == 40);

	REQUIRE(begin_byte_index(type::Width{65}, type::Y{5}) == 40);
}

TEST_CASE("end byte index")
{
	REQUIRE(end_byte_index(type::Width{1}, type::Y{0}) == 0);
	REQUIRE(end_byte_index(type::Width{1}, type::Y{1}) == 0);
	REQUIRE(end_byte_index(type::Width{1}, type::Y{8}) == 1);
	REQUIRE(end_byte_index(type::Width{1}, type::Y{15}) == 1);
	REQUIRE(end_byte_index(type::Width{1}, type::Y{16}) == 2);

	REQUIRE(end_byte_index(type::Width{5}, type::Y{0}) == 0);
	REQUIRE(end_byte_index(type::Width{5}, type::Y{1}) == 1);
	REQUIRE(end_byte_index(type::Width{5}, type::Y{2}) == 1);
	REQUIRE(end_byte_index(type::Width{5}, type::Y{3}) == 2);
	REQUIRE(end_byte_index(type::Width{5}, type::Y{4}) == 3);
	REQUIRE(end_byte_index(type::Width{5}, type::Y{5}) == 3);

	REQUIRE(end_byte_index(type::Width{8}, type::Y{0}) == 0);
	REQUIRE(end_byte_index(type::Width{8}, type::Y{1}) == 1);
	REQUIRE(end_byte_index(type::Width{8}, type::Y{2}) == 2);
	REQUIRE(end_byte_index(type::Width{8}, type::Y{3}) == 3);
	REQUIRE(end_byte_index(type::Width{8}, type::Y{4}) == 4);
	REQUIRE(end_byte_index(type::Width{8}, type::Y{5}) == 5);

	REQUIRE(end_byte_index(type::Width{13}, type::Y{0}) == 1);
	REQUIRE(end_byte_index(type::Width{13}, type::Y{1}) == 3);
	REQUIRE(end_byte_index(type::Width{13}, type::Y{2}) == 4);
	REQUIRE(end_byte_index(type::Width{13}, type::Y{3}) == 6);
	REQUIRE(end_byte_index(type::Width{13}, type::Y{4}) == 8);
	REQUIRE(end_byte_index(type::Width{13}, type::Y{5}) == 9);

	REQUIRE(end_byte_index(type::Width{16}, type::Y{0}) == 1);
	REQUIRE(end_byte_index(type::Width{16}, type::Y{1}) == 3);
	REQUIRE(end_byte_index(type::Width{16}, type::Y{2}) == 5);
	REQUIRE(end_byte_index(type::Width{16}, type::Y{3}) == 7);
	REQUIRE(end_byte_index(type::Width{16}, type::Y{4}) == 9);
	REQUIRE(end_byte_index(type::Width{16}, type::Y{5}) == 11);

	REQUIRE(end_byte_index(type::Width{27}, type::Y{0}) == 3);
	REQUIRE(end_byte_index(type::Width{27}, type::Y{1}) == 6);
	REQUIRE(end_byte_index(type::Width{27}, type::Y{2}) == 10);
	REQUIRE(end_byte_index(type::Width{27}, type::Y{3}) == 13);
	REQUIRE(end_byte_index(type::Width{27}, type::Y{4}) == 16);
	REQUIRE(end_byte_index(type::Width{27}, type::Y{5}) == 20);

	REQUIRE(end_byte_index(type::Width{32}, type::Y{0}) == 3);
	REQUIRE(end_byte_index(type::Width{32}, type::Y{1}) == 7);
	REQUIRE(end_byte_index(type::Width{32}, type::Y{2}) == 11);
	REQUIRE(end_byte_index(type::Width{32}, type::Y{3}) == 15);
	REQUIRE(end_byte_index(type::Width{32}, type::Y{4}) == 19);
	REQUIRE(end_byte_index(type::Width{32}, type::Y{5}) == 23);

	REQUIRE(end_byte_index(type::Width{33}, type::Y{5}) == 24);

	REQUIRE(end_byte_index(type::Width{64}, type::Y{0}) == 7);
	REQUIRE(end_byte_index(type::Width{64}, type::Y{1}) == 15);
	REQUIRE(end_byte_index(type::Width{64}, type::Y{2}) == 23);
	REQUIRE(end_byte_index(type::Width{64}, type::Y{3}) == 31);
	REQUIRE(end_byte_index(type::Width{64}, type::Y{4}) == 39);
	REQUIRE(end_byte_index(type::Width{64}, type::Y{5}) == 47);

	REQUIRE(end_byte_index(type::Width{65}, type::Y{5}) == 48);
}



