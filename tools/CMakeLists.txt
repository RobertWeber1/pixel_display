################################################################################

add_executable( bdf_converter
	bdf_converter.cpp
)

target_compile_options( bdf_converter
	PRIVATE -Wall
	PRIVATE -Wextra
	PRIVATE -Wpedantic
	PRIVATE -std=c++14
)
