#pragma once
#include <pixel_display/type/dimensions.h>

namespace pixel_display
{


template<class Font, template<class ...>class EncodingStrategy, class ... GLYPHES>
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

		output.next_glyphe(code_point);

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
	FontTable<
		F,
		Strategy,
		typename F::template Glyphe<CodePoints> ... >;


} //namespace pixel_display
