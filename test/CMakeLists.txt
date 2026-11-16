cmake_minimum_required(VERSION 3.0)
Include(FetchContent)

project( "test-pixel_font" CXX)


################################################################################


FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1 # or a later release
)


FetchContent_MakeAvailable(Catch2)


################################################################################

add_subdirectory(../ pixel_font)

add_subdirectory(../tools tools)

################################################################################


add_executable( test-pixel_font
	helv.cc
	font_table.cc
	skinny_clock.cc
	utf8.cc
)


target_include_directories( test-pixel_font
	PRIVATE .
)

target_link_libraries( test-pixel_font
	PRIVATE Catch2::Catch2WithMain
	PRIVATE pixel_font
)

target_compile_options( test-pixel_font
	PRIVATE -Wall
	PRIVATE -Wextra
	PRIVATE -Wpedantic
	PRIVATE -std=c++14
)

################################################################################
# Example programs
################################################################################

add_executable( pixel_font-examples
	../examples/hello_world.cc
)

add_executable( utf8_decode
	../examples/utf8_decode.cc
)

# "make pixel_font-examples" builds every example program.
add_dependencies( pixel_font-examples
	utf8_decode
)

target_include_directories( pixel_font-examples
	PRIVATE ../src
)

target_link_libraries( pixel_font-examples
	PRIVATE pixel_font
)

target_compile_options( pixel_font-examples
	PRIVATE -Wall
	PRIVATE -Wextra
	PRIVATE -Wpedantic
)

target_include_directories( utf8_decode
	PRIVATE ../src
)

target_link_libraries( utf8_decode
	PRIVATE pixel_font
)

target_compile_options( utf8_decode
	PRIVATE -Wall
	PRIVATE -Wextra
	PRIVATE -Wpedantic
)
