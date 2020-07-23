#pragma once
#include <pixel_display/type/dimensions.h>
#include <pixel_display/utf8.h>
#include <iomanip>
#include <bitset>
#include <array>
#include <stddef.h>
#include <bitset>

namespace pixel_display
{

namespace output
{


template<size_t Width, size_t Height>
struct Buffer
{
	enum {ByteWidth = Width/8 + ((Width%8 != 0) ? 1 : 0)};

	using Line = std::array<uint8_t, ByteWidth>;
	Line buf[Height] = {0};

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

	void next_glyphe(int)
	{}

	void print_()
	{
		for(int i=Height-1; i>=0; --i)
		{
			std::cout << buf[i] << std::endl;
		}
	}

	void print_colls()
	{
		std::cout << "\n";
		for(int byte = 0; byte<ByteWidth; ++byte)
		{
			for(int shift=0; shift<8; ++shift)
			{
				uint16_t out = 0;
				// for(int line = 13; line >= 0; --line)
				for(int line = 0; line < 14; ++line)
				{
					out |= ((buf[line][byte] >> shift) & 0x01) << line + 2;
				}

				std::cout << "0b" << std::bitset<16>(out) << ",\n";
			}
		}
	}
};


template<class FontTable, size_t Width, size_t Height, size_t N>
constexpr Buffer<Width, Height> render_buffer(
	char const (&data)[N],
	type::Point pos)
{
	Buffer<Width, Height> out;
	for(size_t  i = 0; i<N-1;)
	{
		pos = FontTable::render_glyph(get_codepoint(&data[i], N-1-i, i), pos, out);
	}
	return out;
}


} //namespace output

} //namespace pixel_display
