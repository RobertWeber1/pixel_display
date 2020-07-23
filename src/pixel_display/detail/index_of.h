#pragma once

namespace pixel_display
{

namespace detail
{


template<class ... Ts>
struct TypeList {};

template<class T, class List>
struct get_type_index;

template<class T, class... Ts>
struct get_type_index<T, TypeList<T, Ts...>>
{
	enum size_t { value = 0 };
};

template <class T, class U, class... Ts>
struct get_type_index<T, TypeList<U, Ts...>>
{
	enum size_t { value = 1 + get_type_index<T, TypeList<Ts...>>::value };
};

template<class Type, class ... Types>
constexpr size_t index_of()
{
	return get_type_index<Type, Types...>::value;
}


} //namespace detail

} //namespace pixel_display
