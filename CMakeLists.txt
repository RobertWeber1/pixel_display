cmake_minimum_required(VERSION 3.0)

project( "pixel_font" CXX)

################################################################################

add_library(pixel_font INTERFACE)

target_include_directories(pixel_font INTERFACE src)
