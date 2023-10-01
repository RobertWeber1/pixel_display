#include <pixel_display/utf8.h>
#include <util.h>
#include <catch.h>

TEST_CASE("utf8 decoder")
{
	auto stream = pixel_display::decode_utf8("test", 0);

	REQUIRE(stream.result == pixel_display::Result::Ok);
	REQUIRE(stream.code_point == 't');

	stream = pixel_display::decode_utf8(stream, 0);

	REQUIRE(stream.result == pixel_display::Result::Ok);
	REQUIRE(stream.code_point == 'e');

	stream = pixel_display::decode_utf8(stream, 0);

	REQUIRE(stream.result == pixel_display::Result::Ok);
	REQUIRE(stream.code_point == 's');

	stream = pixel_display::decode_utf8(stream, 0);

	REQUIRE(stream.result == pixel_display::Result::Ok);
	REQUIRE(stream.code_point == 't');

	stream = pixel_display::decode_utf8(stream, 0);

	REQUIRE(stream.result == pixel_display::Result::End);
	REQUIRE(stream.code_point == 0);
}
