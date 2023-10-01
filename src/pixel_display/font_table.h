#pragma once
#include <pixel_display/type/dimensions.h>
#include <pixel_display/detail/string_span.h>
#include <pixel_display/utf8.h>

namespace pixel_display
{

using type::X;
using type::Y;
using type::Width;
using type::Height;
using type::Point;
using type::Size;
using type::Outline;

template<
	class Font,
	template<class ...>class EncodingStrategy,
	class ... GLYPHES>
struct FontTable : EncodingStrategy<Font, GLYPHES...>
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

	static constexpr Outline bounds(int code_point)
	{
		auto const& glyph_info = Data_t::get(code_point);
		return Outline(
			Size{
				Width{glyph_info.width},
				Height{glyph_info.height}},
			Point{
				X{glyph_info.dx},
				Y{glyph_info.dy}});
	}

	static constexpr Width glyph_width(int code_point)
	{
		return Width{Data_t::get(code_point).skip_width};
	}

	static constexpr Height glyph_height(int code_point)
	{
		return Height{Data_t::get(code_point).height};
	}

	static constexpr Height glyph_descent(int code_point)
	{
		return Height{Data_t::get(code_point).dy};
	}

	static constexpr Height glyph_ascent(int code_point)
	{
		return Height{
			static_cast<int16_t>(
				Data_t::get(code_point).height+
				Data_t::get(code_point).dy)};
	}

	template<class Output>
	static constexpr Point render_glyph(
		int code_point,
		Point const& pos,
		Output & output)
	{
		auto const& info = Data_t::get(code_point);

		auto const top_left_corner =
			pos +
			Point{
				X{info.dx},
				Y{static_cast<int16_t>(info.height+info.dy-1)}};

		auto const byte_index =
			Point{
				top_left_corner.get<X>()/8,
				top_left_corner.get<Y>()};

		auto const byte_offset =
			Point{
				top_left_corner.get<X>()%8,
				top_left_corner.get<Y>()};

		auto const mask = Data_t::get_glyphe_mask(info, byte_offset);

		output.next_glyphe(code_point);

		for(int16_t i = 0; i < info.height; ++i)
		{
			output.set(
				Data_t::bit_and(
					Data_t::get_glype_line(
						info,
						Point{top_left_corner.get<X>()%8, Y{i}}),
					mask),
				byte_index-Y{i});
		}

		return pos + X{info.skip_width};
	}

	template<class Output>
	static constexpr Point render_text(
		Output & out,
		Point pos,
		detail::StringSpan const& text)
	{
		for(size_t  i = 0; i<text.size();)
		{
			pos = render_glyph(get_codepoint(&text[i], text.size()-i, i), pos, out);
		}

		return pos;
	}
};


template<class F, template<class ...>class Strategy, int ... CodePoints>
using MakeFontTable =
	FontTable<
		F,
		Strategy,
		typename F::template Glyphe<CodePoints> ... >;


} //namespace pixel_display
