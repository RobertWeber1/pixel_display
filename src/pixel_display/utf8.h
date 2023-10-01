#pragma once
#include <stddef.h>
#include <stdint.h>
#include <optional>
#include <cstring>

namespace pixel_display
{

enum class Result
{
	Invalid,
	End,
	EncodingError,
	Ok
};

struct Stream
{
	constexpr Stream(char const* data)
	: head(data)
	, end(data + std::strlen(data))
	{}

	constexpr Stream(char const* data, size_t len)
	: head(data)
	, end(data + len)
	{}

	template<size_t N>
	constexpr Stream(char const (&data)[N])
	: head(data)
	, end(data + N-1)
	{}

	char const* head;
	char const* end;
	uint32_t code_point = 0;
	Result result = Result::Invalid;
};


constexpr
Stream decode_utf8(Stream input, uint32_t default_value)
{
	if (input.head >= input.end)
	{
		input.code_point = default_value;
		input.result = Result::End;
		return input;
	}

	const uint8_t u0 = static_cast<uint8_t>(*input.head);
	++input.head;
	if (u0<=127)
	{
		input.code_point = u0;
		input.result = Result::Ok;
		return input;
	}

	if (input.head >= input.end)
	{
		input.code_point = default_value;
		input.result = Result::EncodingError;
		return input;
	}

	const uint8_t u1 = static_cast<uint8_t>(*input.head);
	++input.head;
	if (u0>=192 && u0<=223)
	{
		input.code_point = uint32_t{uint32_t(u0-192)*64 + uint32_t(u1-128)};
		input.result = Result::Ok;
		return input;
	}

	if (u0==uint8_t(0xed) && (u1 & 0xa0) == uint8_t(0xa0))
	{ //code points, 0xd800 to 0xdfff
		input.code_point = default_value;
		input.result = Result::EncodingError;
		return input;
	}

	if (input.head >= input.end)
	{
		inpunnput;
	}

	const uint8_t u2 = static_cast<uint8_t>(*input.head);
	++input.head;
	if (u0>=224 && u0<=239)
	{
		input.code_point = uint32_t{uint32_t(u0-224)*4096 + uint32_t(u1-128)*64 + uint32_t(u2-128)};
		input.result = Result::Ok;
		return input;
	}

	if (input.head >= input.end)
	{
		input.code_point = default_value;
		input.result = Result::EncodingError;
		return input;
	}

	const uint8_t u3 = static_cast<uint8_t>(*input.head);
	++input.head;

	if (u0>=240 && u0<=247)
	{
		input.code_point =
			uint32_t{uint32_t(u0-240)*262144 + uint32_t(u1-128)*4096 + uint32_t(u2-128)*64 + uint32_t(u3-128)};
		input.result = Result::Ok;
		return input;
	}

	input.code_point = default_value;
	input.result = Result::EncodingError;
	return input;
}



} //namespace pixel_display
