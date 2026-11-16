// pixel_font UTF-8 decoding example.
//
//   g++ -std=c++14 -Wall -Wextra -Wpedantic -I src examples/utf8_decode.cc -o utf8
//
// decode_utf8 is a step function: it takes a Stream (head/end pointers plus
// the code point and status of the last step) and returns the mutated Stream.
// Feed the returned stream back in to walk the whole input.

#include <pixel_font/utf8.h>
#include <iomanip>
#include <iostream>

constexpr char const* result_name(pixel_font::Result r)
{
	switch(r)
	{
	case pixel_font::Result::Invalid: return "Invalid";
	case pixel_font::Result::End: return "End";
	case pixel_font::Result::EncodingError: return "EncodingError";
	case pixel_font::Result::Ok: return "Ok";
	}
	return "?";
}

// The substitution character used for every failed step.
uint32_t const replacement = 0x3f; // '?'

void print_bytes(char const* text)
{
	for(char const* p = text; *p != '\0'; ++p)
	{
		std::cout
			<< " 0x" << std::hex << std::setw(2) << std::setfill('0')
			<< static_cast<unsigned>(static_cast<unsigned char>(*p));
	}

	std::cout << std::setfill(' ') << std::dec << std::endl;
}

void decode_all(char const* text)
{
	auto stream = pixel_font::decode_utf8(text, replacement);

	for(;;)
	{
		std::cout
			<< "  " << result_name(stream.result)
			<< " 0x" << std::hex << std::setw(4) << std::setfill('0')
			<< stream.code_point
			<< std::setfill(' ') << std::dec << std::endl;

		if(stream.result == pixel_font::Result::End)
			break;

		// decode_utf8 returns the mutated stream: feed it back in.
		// get_codepoint(...) in FontTable::render_text does the same walk.
		stream = pixel_font::decode_utf8(stream, replacement);
	}
}

int main()
{
	char const* const inputs[] =
	{
		"test",             // four ASCII characters
		"\xC3\xA4",         // 'ä'
		"\xE2\x82\xAC",     // '€'
		"\xF0\x9F\x98\x80", // U+1F600
		"\xC0\xAF",         // overlong encoding of '/'
		"\xED\xA0\x80",     // UTF-16 surrogate half
		"\x80",             // stray continuation byte
		"\xF8"              // invalid lead byte
	};

	for(char const* text : inputs)
	{
		print_bytes(text);
		decode_all(text);
	}

	return 0;
}
