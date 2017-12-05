#include "fonts/sinkin.h"
#include "test_utils.h"
#include "catch.h"

#include <iostream>
#include <sstream>
#include <string>


TEST_CASE( "check font properties" )
{
	REQUIRE( display::font::SinkinSans10.entries[0].data.size() == 4 );
	REQUIRE( display::font::SinkinSans10.entries[0].data.height() == 12 );

	SECTION( "copy glyph into display buffer")
	{
		display::PixelArray<30,20> buffer = {0};

		buffer.copy_from( display::font::SinkinSans10.entries[0].data, {15,5} );

		REQUIRE( to_string( buffer ) == "*------------------------------------------------------------*\n"
		                                "|                                                            |\n"
		                                "|                                                            |\n"
		                                "|                                                            |\n"
		                                "|                                                            |\n"
		                                "|                                                            |\n"
		                                "|                                                            |\n"
		                                "|                                                            |\n"
		                                "|                                  [][][][][][]              |\n"
		                                "|                                              []            |\n"
		                                "|                                              []            |\n"
		                                "|                                      [][][][][]            |\n"
		                                "|                                  [][]        []            |\n"
		                                "|                                []            []            |\n"
		                                "|                                []            []            |\n"
		                                "|                                []          [][]            |\n"
		                                "|                                  [][][][][]  []            |\n"
		                                "|                                                            |\n"
		                                "|                                                            |\n"
		                                "|                                                            |\n"
		                                "|                                                            |\n"
		                                "*------------------------------------------------------------*\n");
	}
}