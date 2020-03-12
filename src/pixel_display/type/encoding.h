#pragma once

namespace pixel_display
{


namespace type
{



template<int VALUE>
struct Encoding
{
	static constexpr int value()
	{
		return VALUE;
	}
};


template<class T, T VALUE>
struct Constant
{
	static constexpr T value()
	{
		return VALUE;
	}
};



}

} //namespace pixel_display
