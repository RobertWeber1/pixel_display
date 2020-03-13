#include "catch.h"
#include <pixel_display/font_table.h>
#include <pixel_display/type/encoding.h>
#include <pixel_display/type/dimensions.h>
#include <pixel_display/fonts/helvR10.h>
#include <pixel_display/fonts/helvR14.h>
#include <pixel_display/type/bit_map.h>

using namespace pixel_display;


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
	return os << '{' << pair.template get<T1>() << ',' << pair.template get<T2>() << '}';
}


}
}

using type::BitMap;
using namespace literals;
// template <char... Cs>
// struct BitMap
// {
// 	enum {byte_count = sizeof ... (Cs)};
// };

// template <class T, T ... Cs>
// BitMap<Cs...> operator "" _make_bitmap();

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

template<class Font, template<class ...>class EncodingStrategy, class ... GLYPHES>
struct TestFontTable : EncodingStrategy<Font, GLYPHES...>
{
	using Data_t = EncodingStrategy<Font, GLYPHES...>;

	static constexpr size_t data_size()
	{
		return sizeof(Data_t::glyph_data);
	}

	static constexpr size_t count()
	{
		return sizeof...(GLYPHES);
	}

	static constexpr size_t size()
	{
		return sizeof(Data_t::infos) + sizeof(Data_t::glyph_data);
	}

	static constexpr type::Outline bounds(int code_point)
	{
		auto const& glyph_info = Data_t::get(code_point);
		return type::Outline(
			type::Size{
				type::Width{glyph_info.width},
				type::Height{glyph_info.height}},
			type::Point{
				type::X{glyph_info.dx},
				type::Y{glyph_info.dy}});
	}

	static constexpr type::Width glyph_width(int code_point)
	{
		return type::Width{Data_t::get(code_point).skip_width};
	}

	static constexpr type::Height glyph_height(int code_point)
	{
		return type::Height{Data_t::get(code_point).height};
	}

	static constexpr type::Height glyph_descent(int code_point)
	{
		return type::Height{Data_t::get(code_point).dy};
	}

	static constexpr type::Height glyph_ascent(int code_point)
	{
		return type::Height{
			static_cast<int16_t>(
				Data_t::get(code_point).height+
				Data_t::get(code_point).dy)};
	}

	template<class Output>
	static constexpr type::Point render_glyph(
		int code_point,
		type::Point const& pos,
		Output & output)
	{
		auto const& info = Data_t::get(code_point);

		auto const top_left_corner =
			pos +
			type::Point{type::X{info.dx}, type::Y{static_cast<int16_t>(info.height+info.dy-1)}};

		auto const byte_index =
			type::Point{
				top_left_corner.get<type::X>()/8,
				top_left_corner.get<type::Y>()};

		auto const byte_offset =
			type::Point{
				top_left_corner.get<type::X>()%8,
				top_left_corner.get<type::Y>()};

		auto const mask = Data_t::get_glyphe_mask(info, byte_offset);

		for(int16_t i = 0; i < info.height; ++i)
		{
			output.set(
				Data_t::get_glype_line(info, type::Point{top_left_corner.get<type::X>()%8,type::Y{i}}) &
				mask,
				byte_index-type::Y{i});
		}

		return pos + type::X{info.skip_width};
	}

	template<class Output>
	static constexpr type::Point render_bit_mask(
		int code_point,
		type::Point const& pos,
		Output &)
	{
		auto const& glyph_info = Data_t::get(code_point);

		return pos + type::X{glyph_info.next};
	}
};

template<class F, template<class ...>class Strategy, int ... CodePoints>
using MakeFontTable =
	TestFontTable<
		F,
		Strategy,
		typename F::template Glyphe<CodePoints> ... >;


//------------------------------------------------------------------------------

struct GlyphInfo
{
	int16_t code_point;
	uint16_t data_index;
	uint8_t width;
	uint8_t height;
	int8_t dx;
	int8_t dy;
	int8_t skip_width;

	constexpr GlyphInfo(
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

template<int I>
constexpr int get_encoding(TestFont::Glyphe<I>)
{
	return I;
}

template<class Font, class GlyphInfo, class T>
constexpr GlyphInfo make_info(size_t offset)
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

//------------------------------------------------------------------------------

template<size_t N>
struct Data
{
	uint8_t data[N];

	static constexpr size_t size()
	{
		return N;
	}

	constexpr Data(uint8_t const (&in)[N])
	{
		std::copy(in, in+N, data);
	}

	constexpr Data()
	: data{0}
	{}
};

template<size_t N>
bool operator==(Data<N> const& lhs, Data<N> const& rhs)
{
	for(size_t i = 0; i<N; ++i)
	{
		if(lhs.data[i] != rhs.data[i])
		{
			return false;
		}
	}
	return true;
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
		os << (uint16_t)in.data[i];
	}

	return os << '}';
}

//------------------------------------------------------------------------------


constexpr size_t calc_size(size_t n)
{
	size_t i = n/2;
	return i/8 + ((i%8 != 0) ? 1 : 0);
}


template<class ... GLYPHES>
constexpr size_t byte_count()
{
	size_t result = 0;

	using dummy_ = size_t[];

	(void)dummy_{0, (result += calc_size(GLYPHES::bit_map::byte_count))...};

	return result;
}

//------------------------------------------------------------------------------


template<size_t ...>
struct S{};


template<class ... Ts>
struct TypeList {};

template<class T, class List>
struct Index;

template<class T, class... Ts>
struct Index<T, TypeList<T, Ts...>> {
	enum size_t { value = 0 };
};

template <class T, class U, class... Ts>
struct Index<T, TypeList<U, Ts...>> {
	enum size_t { value = 1 + Index<T, TypeList<Ts...>>::value };
};

//------------------------------------------------------------------------------

template<size_t ... Sizes, size_t ... Is>
constexpr size_t get_offset_(size_t pos, S<Sizes...> const&, std::index_sequence<Is...> const&)
{
	size_t result = 0;

	using dummy_ = size_t[];
	(void)dummy_{
		0,
		(result += ((pos>Is)?Sizes:0))...};

	return result;
}

template<class GLYPHE, class ... GLYPHES>
constexpr size_t get_offset()
{
	return
		get_offset_(
			Index<GLYPHE, TypeList<GLYPHES...>>::value,
			S<calc_size(GLYPHES::bit_map::byte_count)...>{},
			std::make_index_sequence<sizeof...(GLYPHES)>{});
}

//------------------------------------------------------------------------------

template<class, class>
struct bitmap_cat;

template<char ... A, char ... B>
struct bitmap_cat<BitMap<A ...>, BitMap<B ...>>
{
	using type = BitMap<A ..., '|', '|', B ... >;
};

template<class A, class B>
using bitmap_cat_t = typename bitmap_cat<A, B>::type;

//------------------------------------------------------------------------------

template<class ...>
struct flatten;

template<class BM>
struct flatten<BM>
{
	using type = BM;
};

template<class First, class Second, class ... Rest>
struct flatten<First, Second, Rest ...>
: flatten<bitmap_cat_t<First, Second>, Rest...>
{};

template<class ... GLYPHES>
using flatten_t = typename flatten<typename GLYPHES::bit_map ...>::type;

//------------------------------------------------------------------------------


template<size_t Size, char ... Cs>
constexpr Data<Size> encode_(BitMap<Cs...>)
{
	Data<Size> buffer;
	char data[] = {Cs...};

	size_t byte_count = 0;
	unsigned int bit_count = 0;
	uint8_t result = 0;
	bool written = false;

	for(size_t in = 0; in<(sizeof...(Cs)); in+=2)
	{
		written = false;

		if(data[in] == '|')
		{
			written = true;
			if(bit_count !=0)
			{
				buffer.data[byte_count++] = result;
			}

			bit_count = 0;
			result = 0;
			continue;
		}

		if(data[in] != ' ')
		{
			result |= 1<<bit_count;
		}

		++bit_count;

		if(bit_count == 8)
		{
			buffer.data[byte_count++] = result;
			bit_count = 0;
			result = 0;
			written = true;
		}
	}

	if(not written)
	{
		buffer.data[byte_count] = result;
	}

	return buffer;
}


template<class ... GLYPHES>
constexpr Data<byte_count<GLYPHES...>()> encode()
{
	return encode_<byte_count<GLYPHES...>()>(flatten_t<GLYPHES...>{});
}

// template<class ... GLYPHES>
// void encode()
// {
// 	byte_count<GLYPHES...>();
// }

//------------------------------------------------------------------------------
template<class ... GLYPHES>
constexpr size_t max_glyphe_width()
{
	size_t result = 0;

	using dummy_ = size_t[];
	(void)dummy_{0, (result = std::max<size_t>(result, GLYPHES::width::value()))...};

	return result;
}

//------------------------------------------------------------------------------

template<class Buffer>
static Buffer shift_buffer(Buffer input, type::X displacement)
{
	if(displacement == type::X{0})
	{
		return input;
	}

	for(size_t i = input.size()-1; i>=1; --i)
	{
		input[i] =
			(input[i] <<displacement.value) |
			(input[i-1] >> 8- displacement.value);
	}

	input[0] <<= displacement.value;

	return input;
}

uint8_t byte_mask(uint8_t w)
{
	switch(w)
	{
	case 0: return 0b00000000;
	case 1: return 0b00000001;
	case 2: return 0b00000011;
	case 3: return 0b00000111;
	case 4: return 0b00001111;
	case 5: return 0b00011111;
	case 6: return 0b00111111;
	case 7: return 0b01111111;
	}

	return 0b11111111;
}

template<class Buffer>
static Buffer glyphe_mask(uint8_t width, type::X displacement = type::X{0})
{
	Buffer buffer = {0};

	for(uint8_t i=0; i<width/8; ++i)
	{
		buffer[i] = 0xff;
	}

	buffer[width/8] = byte_mask(width%8);

	return shift_buffer(buffer, displacement);
}


template<class T, size_t N>
std::array<T, N> operator|(std::array<T, N> const& lhs, std::array<T, N> const& rhs)
{
	std::array<T, N> ret;

	for(size_t i = 0; i<N; ++i)
	{
		ret[i] = (lhs[i] | rhs[i]);
	}

	return ret;
}

template<class T, size_t N>
std::array<T, N> operator&(std::array<T, N> const& lhs, std::array<T, N> const& rhs)
{
	std::array<T, N> ret;

	for(size_t i = 0; i<N; ++i)
	{
		ret[i] = (lhs[i] & rhs[i]);
	}

	return ret;
}

template<class T, size_t N>
constexpr std::array<T,N> operator<<(std::array<T,N> input, type::X displacement)
{
	if(displacement == type::X{0})
	{
		return input;
	}

	for(size_t i = input.size()-1; i>=1; --i)
	{
		input[i] =
			(input[i] << displacement.value) |
			(input[i-1] >> (sizeof(T)*8) - displacement.value);
	}

	input[0] <<= displacement.value;

	return input;
}

template<class T, size_t N>
constexpr std::array<T,N> operator>>(std::array<T,N> input, type::X displacement)
{
	if(displacement == type::X{0})
	{
		return input;
	}

	for(size_t i = 0; i<input.size()-1; ++i)
	{
		input[i] =
			(input[i] >> displacement.value) |
			(input[i+1] << (sizeof(T)*8) - displacement.value);
	}

	input[input.size()-1] >>= displacement.value;

	return input;
}

template<class T, size_t N>
constexpr std::array<T,N> shift(std::array<T,N> input, type::X displacement)
{
	if(displacement == type::X{0})
	{
		return input;
	}

	if(displacement < type::X{0})
	{
		for(size_t i = 0; i<input.size()-1; ++i)
		{
			input[i] =
				(input[i] >> (-1*displacement.value)) |
				(input[i+1] << (sizeof(T)*8) - (-1*displacement.value));
		}

		input[input.size()-1] >>= displacement.value;
	}
	else
	{
		for(size_t i = input.size()-1; i>=1; --i)
		{
			input[i] =
				(input[i] << displacement.value) |
				(input[i-1] >> (sizeof(T)*8) - displacement.value);
		}

		input[0] <<= displacement.value;
	}

	return input;
}

constexpr size_t calc_buf_size(size_t n)
{
	return (n>>3) + ((n&0x7) ? 1 : 0);
}

constexpr size_t begin_byte_index(type::Width w, type::Y line)
{
	return (w.value * line.value) >> 3;
}

constexpr size_t end_byte_index(type::Width w, type::Y line)
{
	return ((w.value * (line.value+1))-1) / 8;
}

constexpr type::X start_offset(type::Width w, type::Y line)
{
	return type::X{static_cast<decltype(type::X{}.value)>((w.value * line.value) & 0x07)};
}

//------------------------------------------------------------------------------

template<class Font, class ... GLYPHES>
struct SimpleEncoding
{
	using LineBuffer_t =
		std::array<uint8_t, 1 + calc_buf_size(max_glyphe_width<GLYPHES...>())>;

	static constexpr bool has(int code_point)
	{
		for(size_t i=0; i<sizeof...(GLYPHES); ++i)
		{
			if(infos[i].code_point == code_point)
			{
				return true;
			}
		}
		return false;
	}

// protected:
	static constexpr LineBuffer_t get_glype_line(GlyphInfo const& glyphe, type::Point const& pos)
	{
		auto const* data = glyph_data.data + glyphe.data_index;
		auto const width = type::Width{glyphe.width};
		auto const x = pos.get<type::X>();
		auto const y = pos.get<type::Y>();

		LineBuffer_t buf = {0};
		std::copy(
			data + begin_byte_index(width, y),
			data + end_byte_index(width, y) + 1,
			buf.data());

		return shift(buf, x - start_offset(width, y));
	}

	static constexpr LineBuffer_t get_glyphe_mask(GlyphInfo const& glyphe, type::Point const& pos)
	{
		return glyphe_mask<LineBuffer_t>(glyphe.width) << pos.get<type::X>();
	}

	static constexpr GlyphInfo const& get(int code_point)
	{
		for(size_t i=0; i<sizeof...(GLYPHES); ++i)
		{
			if(infos[i].code_point == code_point)
			{
				return infos[i];
			}
		}
		return infos[0];
	}

	static constexpr GlyphInfo infos[sizeof...(GLYPHES)] =
		{make_info<Font, GlyphInfo, GLYPHES>(get_offset<GLYPHES, GLYPHES...>())...};
	static constexpr Data<byte_count<GLYPHES...>()> glyph_data = encode<GLYPHES...>();
		// encode<byte_count<GLYPHES...>()>(flatten_t<GLYPHES...>{});
};


template<class Font, class ... GLYPHES>
constexpr GlyphInfo SimpleEncoding<Font, GLYPHES...>::infos[];

template<class Font, class ... GLYPHES>
constexpr Data<byte_count<GLYPHES...>()> SimpleEncoding<Font, GLYPHES...>::glyph_data;

//------------------------------------------------------------------------------

// using Tab_t =
// 	MakeFontTable<
// 		TestFont,
// 		SimpleEncoding, 0, '(', ')'>;

using HelveticaMedium14_t =
	MakeFontTable<
		pixel_display::font::HelveticaMedium14,
		SimpleEncoding,
		0,
		' ',
		'!',
		'"',
		'#',
		'$',
		'%',
		'&',
		'\'',
		'(',
		')',
		'*',
		'+',
		',',
		'-',
		'.',
		'/',
		'0',
		'1',
		'2',
		'3',
		'4',
		'5',
		'6',
		'7',
		'8',
		'9',
		':',
		';',
		'<',
		'=',
		'>',
		'?',
		'@',
		'A',
		'B',
		'C',
		'D',
		'E',
		'F',
		'G',
		'H',
		'I',
		'J',
		'K',
		'L',
		'M',
		'N',
		'O',
		'P',
		'Q',
		'R',
		'S',
		'T',
		'U',
		'V',
		'W',
		'X',
		'Y',
		'Z',
		'[',
		'\\',
		']',
		'^',
		'_',
		'`',
		'a',
		'b',
		'c',
		'd',
		'e',
		'f',
		'g',
		'h',
		'i',
		'j',
		'k',
		'l',
		'm',
		'n',
		'o',
		'p',
		'q',
		'r',
		's',
		't',
		'u',
		'v',
		'w',
		'x',
		'y',
		'z',
		'{',
		'|',
		'}',
		'~',
		246>;



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


	REQUIRE((Index<
		TestFont::Glyphe<0>,
		TypeList<
			TestFont::Glyphe<0>,
			TestFont::Glyphe<40>,
			TestFont::Glyphe<41>>>::value) == 0);

	REQUIRE((Index<
		TestFont::Glyphe<40>,
		TypeList<
			TestFont::Glyphe<0>,
			TestFont::Glyphe<40>,
			TestFont::Glyphe<41>>>::value) == 1);

	REQUIRE((Index<
		TestFont::Glyphe<41>,
		TypeList<
			TestFont::Glyphe<0>,
			TestFont::Glyphe<40>,
			TestFont::Glyphe<41>>>::value) == 2);

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

template<class T, T ... Cs>
std::array<uint8_t, calc_buf_size(sizeof...(Cs))> operator "" _buf ()
{
	std::array<uint8_t, calc_buf_size(sizeof...(Cs))> buffer = {0};
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
			os << ((t&mask)?'1':'0');
			mask<<=1;
		}
	}

	return os << '}';
}
}

TEST_CASE("shift buffer left")
{
	REQUIRE(
		("000011111111000000000000"_buf << type::X{0}) ==
		 "000011111111000000000000"_buf);

	REQUIRE(
		("101010101010101010101010"_buf << type::X{1}) ==
		 "010101010101010101010101"_buf);

	REQUIRE(
		("000011111110000000000000"_buf << type::X{4}) ==
		 "000000001111111000000000"_buf);

	REQUIRE(
		("100011111111000010000000"_buf << type::X{7}) ==
		 "000000010001111111100001"_buf);
}

TEST_CASE("shift buffer right")
{
	REQUIRE(
		("000011111111000000000000"_buf >> type::X{0}) ==
		 "000011111111000000000000"_buf);

	REQUIRE(
		("101010101010101010101010"_buf >> type::X{1}) ==
		 "010101010101010101010100"_buf);

	REQUIRE(
		("000011111110000000000000"_buf >> type::X{4}) ==
		 "111111100000000000000000"_buf);

	REQUIRE(
		("100011111111000010000000"_buf >> type::X{7}) ==
		 "111110000100000000000000"_buf);
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

	template<size_t N>
	void set(std::array<uint8_t, N> const& data, type::Point const& p)
	{
		set(data, p.get<type::X>().value, p.get<type::Y>().value);
	}
	void print_()
	{
		for(int i=39; i>=0; --i)
		{
			std::cout << buf[i] << std::endl;
		}
	}
};




TEST_CASE("render glyphe")
{
	TestOutput out;

	// REQUIRE(HelveticaMedium20_t::get(0).data_index == 0);
	// REQUIRE(HelveticaMedium20_t::count() == 95);
	// REQUIRE(HelveticaMedium20_t::data_size() == 1238);

	// Tab_t::render_glyph(40, type::Point{type::X{40}, type::Y{26}}, out);
	// Tab_t::render_glyph(0, type::Point{type::X{30}, type::Y{0}}, out);

	type::X x = HelveticaMedium14_t::render_glyph('A', type::Point{type::X{0}, type::Y{2}}, out);
	x = HelveticaMedium14_t::render_glyph('Z', type::Point{x, type::Y{2}}, out);
	x = HelveticaMedium14_t::render_glyph(0xf6, type::Point{x, type::Y{2}}, out);
	x = HelveticaMedium14_t::render_glyph('a', type::Point{x, type::Y{2}}, out);
	// Tab_t::render_glyph(40, type::Point{type::X{5}, type::Y{1}}, out);

	// Tab_t::render_glyph(40, type::Point{type::X{10}, type::Y{2}}, out);

	// Tab_t::render_glyph(40, type::Point{type::X{15}, type::Y{3}}, out);

	// Tab_t::render_glyph(40, type::Point{type::X{20}, type::Y{8}}, out);

	// Tab_t::render_glyph(40, type::Point{type::X{16}, type::Y{5}}, out);
	// out.set("1100001101010101"_buf, 2, 21);

	out.print_();
}

// TEST_CASE("get glyphe line")
// {
// 	REQUIRE(
// 		Tab_t::get_glype_line(Tab_t::get(0),type::Point(type::X{5}, type::Y{0}))
// 		== "000001010101010100000000"_buf);
// 	REQUIRE(
// 		Tab_t::get_glype_line(Tab_t::get(0),type::Point(type::X{5}, type::Y{1}))
// 		== "000000000000000000000000"_buf);

// 	REQUIRE(
// 		Tab_t::get_glype_line(Tab_t::get(0),type::Point(type::X{5}, type::Y{2}))
// 		== "000001000000000100000000"_buf);

// 	REQUIRE(
// 		Tab_t::get_glype_line(Tab_t::get(0),type::Point(type::X{5}, type::Y{12}))
// 		== "000001010101010100000000"_buf);

// 	REQUIRE(
// 		Tab_t::get_glype_line(Tab_t::get(40),type::Point(type::X{5}, type::Y{0}))
// 		== "000000001000000000000000"_buf);

// 	REQUIRE(
// 		Tab_t::get_glype_line(Tab_t::get(40),type::Point(type::X{5}, type::Y{1}))
// 		== "000000011000000000000000"_buf);

// 	REQUIRE(
// 		Tab_t::get_glype_line(Tab_t::get(40),type::Point(type::X{5}, type::Y{5}))
// 		== "000001100000000000000000"_buf);

// 	REQUIRE(
// 		Tab_t::get_glype_line(Tab_t::get(40),type::Point(type::X{5}, type::Y{17}))
// 		== "000000001000000000000000"_buf);

// 	REQUIRE(
// 		Tab_t::get_glype_line(Tab_t::get(41),type::Point(type::X{5}, type::Y{5}))
// 		== "000000011000000000000000"_buf);
// }
//
//


template<size_t Width, size_t Height>
struct StaticOutput
{
	using line_buf = std::array<uint8_t, Width/8 + ((Width%8 != 0) ? 1 : 0)>;
	line_buf buf[Height] = {0};

	template<size_t N>
	void set(std::array<uint8_t, N> const& data, uint16_t byte_index, uint16_t line)
	{
		if(byte_index>=buf[0].size() or line >= Height)
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

	template<size_t N>
	void set(std::array<uint8_t, N> const& data, type::Point const& p)
	{
		set(data, p.get<type::X>().value, p.get<type::Y>().value);
	}

	void print_()
	{
		for(int i=Height-1; i>=0; --i)
		{
			std::cout << buf[i] << std::endl;
		}
	}

	void print_c()
	{
		for(int i=Height-1; i>=0; --i)
		{
			std::cout << "static constexpr std::array<uint8_t>" << buf[i] << std::endl;
		}
	}
};

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
	size_t result = 0;

	for(size_t  i = 0; i<N-1; ++i)
	{
		result = std::max<size_t>(FontTable::glyph_height(data[i]).value, result);
	}

	return result;
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

using value_type = int;


template <typename Iterator>
size_t get_length (Iterator p)
{
    unsigned char c = static_cast<unsigned char> (*p);
    if (c < 0x80) return 1;
    else if (!(c & 0x20)) return 2;
    else if (!(c & 0x10)) return 3;
    else if (!(c & 0x08)) return 4;
    else if (!(c & 0x04)) return 5;
    else return 6;
}

template <typename Iterator>
value_type get_value (Iterator p)
{
    size_t len = get_length (p);

    if (len == 1)

    return *p++;

    value_type res = static_cast<unsigned char> (
                                    *p & (0xff >> (len + 1)))
                                     << ((len - 1) * 6);

    for (--len; len; --len)
        res |= (static_cast<unsigned char> (*(++p)) - 0x80) << ((len - 1) * 6);

    return res;
}

struct CharIter
{
	char const* p_;

	CharIter& operator++()
	{
		++p_;
		return *this;
	}

	char operator*()
	{
		return *p_;
	}

	bool operator==(const char* other)
	{
		return p_ == other;
	}

	bool operator!=(const char* other)
	{
		return p_ != other;
	}
};

template<class FontTable, size_t Width, size_t Height, size_t N>
constexpr StaticOutput<Width, Height> make_static_out(char const (&data)[N], type::Y y)
{
	StaticOutput<Width, Height> out;
	type::X x{0};
	for(size_t  i = 0; i<N-1; ++i)
	{
		x = FontTable::render_glyph(data[i], type::Point{x, y}, out);
	}

	// std::string foo(data, N);
	// char const* p = data;
	// while(p < (data+N))
	// {
	// 	x = FontTable::render_glyph(get_value<char const*&>(p), type::Point{x, y}, out);
	// }

	return out;
}

constexpr char credits[] = "Babett | Cornelius | Daniela | Dorothea | Erik | Holger | Jens H | Joerg | Karli | Karsten M | Katharina | Kathrin | Katrin | Klaus B | Lissy | Martin B | Martin H | Petra | Ralf D | Ralf N | Ralf S | Rico B | Rico T | Robert P | Robert W | Stefan M | Steffen K | Thomas K | Udo G | ";

auto constexpr w = width<HelveticaMedium14_t>(credits);
auto constexpr h = height<HelveticaMedium14_t>(credits);
auto constexpr desc = descent<HelveticaMedium14_t>(credits);
auto constexpr asc = ascent<HelveticaMedium14_t>(credits);

enum class StratCorner
{
	TopLeft,
	BottomLeft,
	TopRight,
	BottomRight
};

using Collumn  = std::array<uint16_t, 14>;
using Collumns = std::array<Collumn, 20>;

Collumns make_pixel_table(StratCorner start)
{
	uint16_t index = 0;
	bool first = true;
	Collumns ret;
	switch(start)
	{
	case StratCorner::BottomLeft:
		first = false;

	[[Fallthrough]]
	case StratCorner::TopLeft:
		for(int i=0; i<20; ++i)
		{
			if(first)
			{
				first = false;
				for(int j=0; j<14; ++j)
				{
					ret[i][j] = index++;
				}
			}
			else
			{
				first = true;
				for(int j=13; j>=0; --j)
				{
					ret[i][j] = index++;
				}
			}
		}
	break;


	case StratCorner::BottomRight:
		first = false;
	case StratCorner::TopRight:
		for(int i=19; i>=0; --i)
		{
			if(first)
			{
				first = false;
				for(int j=0; j<14; ++j)
				{
					ret[i][j] = index++;
				}
			}
			else
			{
				first = true;
				for(int j=13; j>=0; --j)
				{
					ret[i][j] = index++;
				}
			}
		}
	break;

	}

	return ret;
}


template<StratCorner Start>
struct PixelTable
{
	uint16_t get(int x, int y)
	{
		return colls_[x][y];
	}
private:
	Collumns colls_ = make_pixel_table(Start);
};


TEST_CASE("StratCorner::TopLeft")
{
	PixelTable<StratCorner::TopLeft> pt;

	REQUIRE(pt.get(0,0) == 0);
	REQUIRE(pt.get(0,13) == 13);
	REQUIRE(pt.get(1,13) == 14);
	REQUIRE(pt.get(1,0) == 27);

	REQUIRE(pt.get(19,13) == 266);
	REQUIRE(pt.get(19,0) == 279);
	// REQUIRE(w == 1852);
	// REQUIRE(h == 11);
	// REQUIRE(desc == -3);
	// REQUIRE(asc == 11);

	// make_static_out<HelveticaMedium14_t, w, 16>(credits, type::Y{5}).print_();
}