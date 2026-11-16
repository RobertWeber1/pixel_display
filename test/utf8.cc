#include <catch2/catch_test_macros.hpp>
#include <pixel_font/utf8.h>
#include <util.h>

TEST_CASE("utf8 decoder")
{
	auto stream = pixel_font::decode_utf8("test", 0);

	REQUIRE(stream.result == pixel_font::Result::Ok);
	REQUIRE(stream.code_point == 't');

	stream = pixel_font::decode_utf8(stream, 0);

	REQUIRE(stream.result == pixel_font::Result::Ok);
	REQUIRE(stream.code_point == 'e');

	stream = pixel_font::decode_utf8(stream, 0);

	REQUIRE(stream.result == pixel_font::Result::Ok);
	REQUIRE(stream.code_point == 's');

	stream = pixel_font::decode_utf8(stream, 0);

	REQUIRE(stream.result == pixel_font::Result::Ok);
	REQUIRE(stream.code_point == 't');

	stream = pixel_font::decode_utf8(stream, 0);

	REQUIRE(stream.result == pixel_font::Result::End);
	REQUIRE(stream.code_point == 0);
}
