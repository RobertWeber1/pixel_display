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
		for(uint16_t i = 0; i < N; ++i)
		{
			auto const index = uint16_t(byte_index+i);
			if(index >= buf[0].size())
				continue;

			buf[line][index] |= data[i];
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
			// std::cout << buf[i] << std::endl;
			std::cout << '|';

			for(auto const& t : buf[i])
			{
				uint8_t mask = 1;
				for(int i=0; i<8; ++i)
				{
					std::cout << ((t&mask)?"[]":"  ");
					mask<<=1;
				}
			}

			std::cout << "|"  << std::endl;
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


template<class FontTable, size_t Width, size_t Height>
constexpr Buffer<Width, Height> fill_new_buffer(
	detail::StringSpan const& data,
	type::Point pos)
{
	Buffer<Width, Height> out;
	FontTable::render_text(out, pos, data);
	return out;
}


} //namespace output

} //namespace pixel_display
