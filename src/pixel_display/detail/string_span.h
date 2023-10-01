#pragma once
#include <string>
#include <string.h>

namespace pixel_display
{

namespace detail
{

struct StringSpan
{
	StringSpan(std::string const& s)
	: begin_(s.data())
	, size_(s.size())
	{}

	template<size_t N>
	StringSpan(char const (&s)[N])
	: begin_(s)
	, size_(N-1)
	{}

	StringSpan(char const* s)
	: begin_(s)
	, size_(strlen(s))
	{}

	char const* begin() const
	{
		return begin_;
	}

	char const* end() const
	{
		return begin_ + size_;
	}

	size_t size() const
	{
		return size_;
	}

	char const& operator[](size_t index) const
	{
		return begin_[index];
	}

private:
	char const* begin_;
	size_t size_;
};

} //namespace detail

} //namespace pixel_display
