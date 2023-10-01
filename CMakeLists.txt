cmake_minimum_required(VERSION 3.0)

project( "pixel_display" CXX)

################################################################################

add_library(pixel_font INTERFACE)

target_include_directories(pixel_font INTERFACE src)

################################################################################

add_executable( bdf_converter EXCLUDE_FROM_ALL
	tools/bdf_converter.cpp
)

################################################################################


add_executable( test-pixel_display EXCLUDE_FROM_ALL
	test/catch.cc
	# test/helv.cc
	# test/font_table.cc
	# test/skinny_clock.cc
	test/utf8.cc
)


target_include_directories( test-pixel_display
	PRIVATE test/
)

target_link_libraries( test-pixel_display
	PRIVATE pixel_font
)

target_compile_options( test-pixel_display
	PRIVATE -Wall
	PRIVATE -Wextra
	PRIVATE -Wpedantic
	# PRIVATE -std=c++14
)
