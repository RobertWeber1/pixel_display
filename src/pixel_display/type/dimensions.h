#pragma once

#include <iostream>

namespace pixel_display
{

namespace type
{


template<class T, class P>
T get(P const& p)
{
	return static_cast<T>(p);
}

template<class T1, class T2>
struct Pair : T1, T2
{
	Pair()
	{}

	constexpr Pair(T1 const & t1, T2 const & t2)
	: T1(t1)
	, T2(t2)
	{}

	constexpr Pair(Pair<T1, T2> const & p)
	: T1(p.get<T1>())
	, T2(p.get<T2>())
	{}

	Pair<T1, T2> & operator=(Pair<T1, T2> const& other)
	{
		*static_cast<T1*>(this) = other.get<T1>();
		*static_cast<T2*>(this) = other.get<T2>();
		return *this;
	}

	template<class U>
	U get() const
	{
		return *this;
	}

	template<class U>
	U & get()
	{
		return *this;
	}

	Pair<T1, T2> operator+(Pair<T1, T2> const& other) const
	{
		return
			Pair<T1, T2>(
				get<T1>()+other.get<T1>(),
				get<T2>()+other.get<T2>());
	}

	Pair<T1, T2> operator+(T1 const& t1) const
	{
		return Pair<T1, T2>(get<T1>()+t1, get<T2>());
	}

	Pair<T1, T2> operator+(T2 const& t2) const
	{
		return Pair<T1, T2>(get<T1>(), get<T2>()+t2);
	}

	Pair<T1, T2> operator-(Pair<T1, T2> const& other) const
	{
		return
			Pair<T1, T2>(
				get<T1>()-other.get<T1>(),
				get<T2>()-other.get<T2>());
	}

	Pair<T1, T2> operator-(T1 const& t1) const
	{
		return Pair<T1, T2>(get<T1>()-t1, get<T2>());
	}

	Pair<T1, T2> operator-(T2 const& t2) const
	{
		return Pair<T1, T2>(get<T1>(), get<T2>()-t2);
	}

	bool operator==(Pair<T1, T2> const& other) const
	{
		return
			get<T1>() == other.get<T1>() and
			get<T2>() == other.get<T2>();
	}

	bool operator!=(Pair<T1, T2> const& other) const
	{
		return not(*this == other);
	}
};




template<class T, class TAG>
struct Dimension
{
	typedef Dimension<T, TAG> Self_t;

	T value;

	Dimension()
	: value(T())
	{}

	explicit
	constexpr Dimension(T const& value_)
	: value(value_)
	{}

	constexpr Dimension(Self_t const& other)
	: value(other.value)
	{}

	Self_t & operator=(Self_t const& other)
	{
		value = other.value;
		return *this;
	}

	Self_t operator+(Self_t const& other) const
	{
		return Self_t(value + other.value);
	}

	Self_t operator+(T other) const
	{
		return Self_t(value + other);
	}

	Self_t operator-(Self_t const& other) const
	{
		return Self_t(value - other.value);
	}

	bool operator==(Self_t const& other) const
	{
		return value == other.value;
	}

	bool operator<(Self_t const& other) const
	{
		return value < other.value;
	}

	bool operator!=(Self_t const& other) const
	{
		return not(*this == other);
	}

	bool operator<=(Self_t const& other) const
	{
		return *this == other or *this < other;
	}

	bool operator>(Self_t const& other) const
	{
		return not(*this <= other);
	}

	bool operator>=(Self_t const& other) const
	{
		return *this == other or *this > other;
	}
};


template<class T, class TAG>
Dimension<T, TAG> operator*(Dimension<T, TAG> const& dim, int scalar)
{
	return Dimension<T, TAG>{static_cast<T>(dim.value * scalar)};
}

template<class T, class TAG>
Dimension<T, TAG> operator/(Dimension<T, TAG> const& dim, int divisor)
{
	return Dimension<T, TAG>{static_cast<T>(dim.value / divisor)};
}

template<class T, class TAG>
Dimension<T, TAG> operator%(Dimension<T, TAG> const& dim, int divisor)
{
	return Dimension<T, TAG>{static_cast<T>(dim.value % divisor)};
}



template<class T>
T const& min(T const& lhs, T const& rhs)
{
	return (lhs <= rhs) ? lhs : rhs;
}


// template<class T>
using X = Dimension<int16_t, struct XTag>;


// template<class T>
using Y = Dimension<int16_t, struct YTag>;


// template<class T>
using Width = Dimension<int16_t, struct WidthTag>;


// template<class T>
using Height = Dimension<int16_t, struct HeightTag>;


// template<class T>
using Point = Pair< X, Y >;


// template<class T>
using Size = Pair< Width, Height >;

using Outline = Pair<Size, Point>;

} //namespace type

} //namespace pixel_display
