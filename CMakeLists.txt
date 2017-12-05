cmake_minimum_required(VERSION 3.0)


#include( ./Toolchain-arm-gcc.cmake )


project( "pixel_display" )

enable_language(CXX C ASM)

################################################################################
# extraxt version info from git

execute_process(
	COMMAND git describe --tags
	WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
	OUTPUT_STRIP_TRAILING_WHITESPACE
	OUTPUT_VARIABLE GIT_TAG
)

execute_process(
	COMMAND git rev-parse HEAD
	WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
	OUTPUT_STRIP_TRAILING_WHITESPACE
	OUTPUT_VARIABLE COMMIT_HASH
)

set( VERSION_MATCHER "^[V|v]?[_|\\.]?([0-9]+)[_|\\.]([0-9]+)[_|\\.]([0-9]+)[_|\\.]?([0-9a-zA-Z]*).*" )

if( ${GIT_TAG} MATCHES ${VERSION_MATCHER} )
	string(REGEX REPLACE ${VERSION_MATCHER} "\\1" VERSION_MAJOR "${GIT_TAG}")
	string(REGEX REPLACE ${VERSION_MATCHER} "\\2" VERSION_MINOR "${GIT_TAG}")
	string(REGEX REPLACE ${VERSION_MATCHER} "\\3" VERSION_PATCH "${GIT_TAG}")
else()
	message( STATUS "NO Match in git tag" )
	set( VERSION_MAJOR "0" )
	set( VERSION_MINOR "0" )
	set( VERSION_PATCH "0" )
endif()

configure_file (
	"${PROJECT_SOURCE_DIR}/src/version.cpp.in"
	"${PROJECT_BINARY_DIR}/version.cpp"
)

set( VERSION_SRC "${PROJECT_BINARY_DIR}/version.cpp" )


################################################################################
# coverage analysis for unit tests

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
	option(COVERAGE_unit_test_${PROJECT_NAME} "Enable test coverage profiling" NO)
endif()

set( GCOV_LIB )

if(COVERAGE_unit_test_${PROJECT_NAME} )
	set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -Wall -W -Wshadow -Wunused-variable \
		-Wunused-parameter -Wunused-function -Wunused -Wno-system-headers \
		-Wno-deprecated -Wwrite-strings -fprofile-arcs -ftest-coverage")
	set( CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -O0 -Wall -W -fprofile-arcs -ftest-coverage" )
	set( CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -lgcov -fprofile-arcs -ftest-coverage" )
	set( GCOV_LIB gcov )
	find_program( LCOV lcov )
	find_program( GENHTML genhtml )

	add_custom_target(coverage_unit_test_${PROJECT_NAME}
		COMMAND ${LCOV} --capture --directory . --output-file coverage.info
		COMMAND ${LCOV} --remove coverage.info "usr/*" --output-file coverage.info
		COMMAND ${LCOV} --remove coverage.info "/tests/fakeit.h" --output-file coverage.info
		COMMAND ${LCOV} --remove coverage.info "/tests/catch.h" --output-file coverage.info
		COMMAND ${LCOV} --remove coverage.info "/tests/catch.cpp" --output-file coverage.info
		COMMAND ${GENHTML} coverage.info --output-directory coverage-report
	)
endif()


################################################################################
# compiler flags

set( CMAKE_CXX_FLAGS
	"${CMAKE_CXX_FLAGS} -Os -std=c++11\
	                    -Wall -W -Wshadow -Wunused-variable -Wpedantic \
	                    -Wunused-parameter -Wunused-function -Wunused \
	                    -fdata-sections -ffunction-sections")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -s -Wl,--gc-sections")


################################################################################
# firmware


set( SOURCES
	${VERSION_SRC}
	src/fonts/font.cc
)


################################################################################
# executable for unit tests

add_executable( unit_tests_${PROJECT_NAME}
	${SOURCES}
	tests/catch.cc
	tests/test_utils.cc
	tests/unit_test_display_buffer.cc
	tests/unit_test_font.cc
	tests/unit_test_icons.cc
)

target_include_directories( unit_tests_${PROJECT_NAME}
	PRIVATE src/
	PRIVATE test/
)


target_link_libraries( unit_tests_${PROJECT_NAME}
	${GCOV_LIB}
)

