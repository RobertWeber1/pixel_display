#pragma once
#include <pixel_display/type/bit_map.h>
#include <pixel_display/type/data.h>
#include <pixel_display/detail/index_of.h>


namespace pixel_display
{

namespace encoding
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

//------------------------------------------------------------------------------

constexpr size_t calc_size(size_t n)
{
	return n/16 + ((n%16 != 0) ? 1 : 0);
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


template<size_t ... Sizes, size_t ... Is>
constexpr size_t get_offset_(
	size_t pos, S<Sizes...> const&,
	std::index_sequence<Is...> const&)
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
			detail::index_of<GLYPHE, detail::TypeList<GLYPHES...>>(),
			S<calc_size(GLYPHES::bit_map::byte_count)...>{},
			std::make_index_sequence<sizeof...(GLYPHES)>{});
}

//------------------------------------------------------------------------------

using type::BitMap;
using type::Data;
using type::flatten_t;

template<size_t Size, char ... Cs>
constexpr type::Data<Size> encode_(BitMap<Cs...> const&)
{
	type::Data<Size> buffer;
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
				buffer[byte_count++] = result;
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
			buffer[byte_count++] = result;
			bit_count = 0;
			result = 0;
			written = true;
		}
	}

	if(not written)
	{
		buffer[byte_count] = result;
	}

	return buffer;
}


template<class ... GLYPHES>
constexpr type::Data<byte_count<GLYPHES...>()> encode()
{
	return encode_<byte_count<GLYPHES...>()>(flatten_t<GLYPHES...>{});
}

//------------------------------------------------------------------------------

template<class ... GLYPHES>
constexpr size_t max_glyphe_width()
{
	size_t result = 0;

	using dummy_ = size_t[];
	(void)dummy_{0,
		(result = std::max<size_t>(result, GLYPHES::width::value()))...};

	return result;
}

//------------------------------------------------------------------------------

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

template<class T, size_t N>
constexpr std::array<T,N> shift(std::array<T,N> input, type::X displacement);

template<class Buffer>
static Buffer glyphe_mask(uint8_t width, type::X displacement = type::X{0})
{
	Buffer buffer = {0};

	for(uint8_t i=0; i<width/8; ++i)
	{
		buffer[i] = 0xff;
	}

	buffer[width/8] = byte_mask(width%8);

	return shift(buffer, displacement);
}


template<class T, size_t N>
std::array<T, N> operator|(
	std::array<T, N> const& lhs,
	std::array<T, N> const& rhs)
{
	std::array<T, N> ret;

	for(size_t i = 0; i<N; ++i)
	{
		ret[i] = (lhs[i] | rhs[i]);
	}

	return ret;
}

template<class T, size_t N>
std::array<T, N> operator&(
	std::array<T, N> const& lhs,
	std::array<T, N> const& rhs)
{
	std::array<T, N> ret;

	for(size_t i = 0; i<N; ++i)
	{
		ret[i] = (lhs[i] & rhs[i]);
	}

	return ret;
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
		displacement = displacement * -1;

		for(size_t i = 0; i<input.size()-1; ++i)
		{
			input[i] =
				(input[i] >> (displacement.value)) |
				(input[i+1] << (sizeof(T)*8) - (displacement.value));
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
	return
		type::X{
			static_cast<decltype(type::X{}.value)>(
				(w.value * line.value) & 0x07)};
}

//------------------------------------------------------------------------------

template<class Font, class ... GLYPHES>
struct Simple
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

protected:
	static constexpr LineBuffer_t get_glype_line(
		GlypheInfo const& glyphe,
		type::Point const& pos)
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

	static constexpr LineBuffer_t get_glyphe_mask(
		GlypheInfo const& glyphe,
		type::Point const& pos)
	{
		return glyphe_mask<LineBuffer_t>(glyphe.width, pos.get<type::X>());
	}

	static constexpr GlypheInfo const& get(int code_point)
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

	static constexpr GlypheInfo infos[sizeof...(GLYPHES)] =
		{make_info<Font, GlypheInfo, GLYPHES>(
			get_offset<GLYPHES, GLYPHES...>())...};
	static constexpr type::Data<byte_count<GLYPHES...>()> glyph_data =
		encode<GLYPHES...>();
};


template<class Font, class ... GLYPHES>
constexpr GlypheInfo Simple<Font, GLYPHES...>::infos[];

template<class Font, class ... GLYPHES>
constexpr type::Data<byte_count<GLYPHES...>()>
	Simple<Font, GLYPHES...>::glyph_data;


} //namespace encoding

} //namespace pixel_display
