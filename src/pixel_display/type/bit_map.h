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

} //namespace type

inline namespace literals
{

template <class T, T ... Cs>
type::BitMap<Cs...> operator "" _make_bitmap();

} //namespace literales

} //namespace pixel_display
