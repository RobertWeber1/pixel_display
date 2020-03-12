#pragma once
// #include <pixel_display/type/coordinates.h>

namespace pixel_display
{


struct Output
{
	template<class T>
	Output(T & t)
	{
		new(buffer_) Model<T>();
	}



private:
	struct BaseModel
	{


	};

	template<class T>
	struct Model
	{

	};

	void * buffer_[2];
};



template<class ... GLYPHES>
struct FontTable
{
	// type::X render_glyph(uint32_t code_point, type::X, type::Y, Output out);
};

// template<class Font, uint32_t ... CodePoints>
// using MakeFontTable = FontTable<typename Font::lockup<CodePoints>::glyph ... >;


} //namespace pixel_display
