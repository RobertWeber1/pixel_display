cmake_minimum_required(VERSION 3.0)

project( "pixel_display" CXX)


################################################################################

add_executable( bdf_converter
	tools/bdf_converter.cpp
)

################################################################################


add_executable( test-pixel_display EXCLUDE_FROM_ALL
	test/catch.cc
	test/font_table.cc
)


target_include_directories( test-pixel_display
	PRIVATE src/
	PRIVATE test/
)

target_compile_options( test-pixel_display
	PRIVATE -Wall
	PRIVATE -Wextra
	PRIVATE -Wpedantic
	# PRIVATE -std=c++14
)