#pragma once


namespace pixel_display
{

namespace type
{


template<size_t N, class Type = uint8_t>
struct Data
{
	Type data[N];

	static constexpr size_t size()
	{
		return N;
	}

	constexpr Data(uint8_t const (&in)[N])
	{
		std::copy(in, in+N, data);
	}

	constexpr Data()
	: data{}
	{}

	constexpr Type const& operator[](size_t i) const
	{
		return data[i];
	}

	constexpr Type & operator[](size_t i)
	{
		return data[i];
	}

};


} //namespace type

} //namespace pixel_display
