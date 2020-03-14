#pragma once


namespace pixel_display
{

namespace type
{

template <char... Cs>
struct BitMap
{
	enum {byte_count = sizeof ... (Cs)};
};

} //namespace type

inline namespace literals
{

template <class T, T ... Cs>
type::BitMap<Cs...> operator "" _make_bitmap();

} //namespace literales

} //namespace pixel_display
