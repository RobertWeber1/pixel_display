#include "buffer.h"
#include "test_utils.h"
#include "catch.h"

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>


TEST_CASE( "clip" )
{
	SECTION( "square total inside of boundaries" )
	{
		REQUIRE( display::clip( display::Square({0,0},{10,10}), display::Size{ 20, 20 } ) == display::Square({0,0},{10,10}) );
		REQUIRE( display::clip( display::Square({10,10},{10,10}), display::Size{ 20, 20 } ) == display::Square({10,10},{10,10}) );
	}

	SECTION( "square partialy outside of boundaries" )
	{
		REQUIRE( display::clip( display::Square({15,0},{10,10}), display::Size{ 20, 20 } ) == display::Square({15,0},{5,10}) );
		REQUIRE( display::clip( display::Square({0,15},{10,10}), display::Size{ 20, 20 } ) == display::Square({0,15},{10,5}) );
		REQUIRE( display::clip( display::Square({15,15},{10,10}), display::Size{ 20, 20 } ) == display::Square({15,15},{5,5}) );
	}

	SECTION( "square totaly outside of boundaries" )
	{
		REQUIRE( display::clip( display::Square({20,0},{10,10}), display::Size{ 20, 20 } ) == display::Square({20,0},{0,10}) );
		REQUIRE( display::clip( display::Square({0,20},{10,10}), display::Size{ 20, 20 } ) == display::Square({0,20},{10,0}) );
		REQUIRE( display::clip( display::Square({20,20},{10,10}), display::Size{ 20, 20 } ) == display::Square({20,20},{0,0}) );
	}
}


TEST_CASE( "bit mask" )
{
	REQUIRE( display::bit_mask<uint32_t>(0)   == 0x00000000 );
	REQUIRE( display::bit_mask<uint32_t>(1)   == 0x00000001 );
	REQUIRE( display::bit_mask<uint32_t>(2)   == 0x00000003 );
	REQUIRE( display::bit_mask<uint32_t>(3)   == 0x00000007 );
	REQUIRE( display::bit_mask<uint32_t>(4)   == 0x0000000f );
	REQUIRE( display::bit_mask<uint32_t>(5)   == 0x0000001f );
	REQUIRE( display::bit_mask<uint32_t>(6)   == 0x0000003f );
	REQUIRE( display::bit_mask<uint32_t>(7)   == 0x0000007f );
	REQUIRE( display::bit_mask<uint32_t>(8)   == 0x000000ff );
	REQUIRE( display::bit_mask<uint32_t>(9)   == 0x000001ff );
	REQUIRE( display::bit_mask<uint32_t>(10)  == 0x000003ff );
	REQUIRE( display::bit_mask<uint32_t>(11)  == 0x000007ff );
	REQUIRE( display::bit_mask<uint32_t>(12)  == 0x00000fff );
	REQUIRE( display::bit_mask<uint32_t>(13)  == 0x00001fff );
	REQUIRE( display::bit_mask<uint32_t>(14)  == 0x00003fff );
	REQUIRE( display::bit_mask<uint32_t>(15)  == 0x00007fff );
	REQUIRE( display::bit_mask<uint32_t>(16)  == 0x0000ffff );
	REQUIRE( display::bit_mask<uint32_t>(31)  == 0x7fffffff );
	REQUIRE( display::bit_mask<uint32_t>(32)  == 0xffffffff );

	REQUIRE( display::bit_mask<uint32_t>(128) == 0xffffffff );
}


TEST_CASE( "calc size" )
{
	REQUIRE( display::data_size<uint32_t>(10,12) == 4 );
}


TEST_CASE( "PixelArray" )
{
	SECTION( "check paded size" )
	{
		SECTION( "16x16 pixel" )
		{
			display::PixelArray<16,16> arr;
			REQUIRE( arr.size() == 8 );
			REQUIRE( sizeof( arr ) == 32 );
		}

		SECTION( "640x7 pixel" )
		{
			display::PixelArray<640,7> arr;
			REQUIRE( arr.size() == 140 );
			REQUIRE( sizeof( arr ) == 560 );
		}

		SECTION( "256x64 pixel" )
		{
			display::PixelArray<256, 64> arr;
			REQUIRE( arr.size() == 512 );
			REQUIRE( sizeof( arr ) == 2048 );
		}

		SECTION( "32x8 pixel" )
		{
			display::PixelArray<32,8> arr;
			REQUIRE( arr.size() == 8 );
			REQUIRE( sizeof( arr ) == 32 );
		}

		SECTION( "32x4 pixel" )
		{
			display::PixelArray<32,4> arr;
			REQUIRE( arr.size() == 4 );
			REQUIRE( sizeof( arr ) == 16 );
		}

		SECTION( "32x3 pixel" )
		{
			display::PixelArray<32,3> arr;
			REQUIRE( arr.size() == 3 );
			REQUIRE( sizeof( arr ) == 12 );
		}

		SECTION( "32x2 pixel" )
		{
			display::PixelArray<32,2> arr;
			REQUIRE( arr.size() == 2 );
			REQUIRE( sizeof( arr ) == 8 );
		}

		SECTION( "32x1 pixel ")
		{
			display::PixelArray<32,1> arr;
			REQUIRE( arr.size() == 1 );
			REQUIRE( sizeof( arr ) == 4 );
		}
	}

	SECTION( "init" )
	{
		display::PixelArray<16,16> arr = {1,2,3,0x80000000,5,6,7,8};
		REQUIRE( arr.data[2] == 3 );
		REQUIRE( arr.data[3] == 0x80000000 );
		REQUIRE( arr.data[4] == 5 );
	}

	SECTION( "access 64x5 pixel" )
	{
		display::PixelArray<64,5> arr = {0x1,0x2,
		                                 0x3,0x4,
		                                 0x5,0x6,
		                                 0x7,0x8,
		                                 0x9,0xa};

		SECTION( "out of border results in 0" )
		{
			REQUIRE( arr.get({64,0},1) == 0 );
			REQUIRE( arr.get({63,5},1) == 0 );
			REQUIRE( arr.get({0,5},1) == 0 );
			REQUIRE( arr.get({44440,54325},1) == 0 );
		}

		SECTION( "alligned, max bit width" )
		{
			REQUIRE( arr.get({0,0},32 ) == 0x1 );
			REQUIRE( arr.get({32,0},32) == 0x2 );
			REQUIRE( arr.get({0,1},32) == 0x3 );
			REQUIRE( arr.get({32,1},32) == 0x4 );
			REQUIRE( arr.get({0,2},32) == 0x5 );
			REQUIRE( arr.get({32,2},32) == 0x6 );
			REQUIRE( arr.get({0,3},32) == 0x7 );
			REQUIRE( arr.get({32,3},32) == 0x8 );
			REQUIRE( arr.get({0,4},32) == 0x9 );
			REQUIRE( arr.get({32,4},32) == 0xa );
		}

		SECTION( "alligned, min bit width" )
		{
			REQUIRE( arr.get({0,0},1) == 1 );
			REQUIRE( arr.get({32,0},1) == 0 );
			REQUIRE( arr.get({0,1},1) == 1 );
			REQUIRE( arr.get({32,1},1) == 0 );
			REQUIRE( arr.get({0,2},1) == 1 );
			REQUIRE( arr.get({32,2},1) == 0 );
			REQUIRE( arr.get({0,3},1) == 1 );
			REQUIRE( arr.get({32,3},1) == 0 );
			REQUIRE( arr.get({0,4},1) == 1 );
			REQUIRE( arr.get({32,4},1) == 0 );
		}

		SECTION( "unalligned access" )
		{
			arr.data[0] = 0xaaaaaaaa;
			arr.data[1] = 0xffffffff;
			REQUIRE( arr.get({0,0},2) == 0x2 );
			REQUIRE( arr.get({2,0},3) == 0x2 );
			REQUIRE( arr.get({3,0},3) == 0x5 );
			REQUIRE( arr.get({32,0},1) == 1 );
			REQUIRE( arr.get({31,0},1) == 1 );
			REQUIRE( arr.get({31,0},2) == 3 );
			REQUIRE( arr.get({30,0},3) == 6 );
			REQUIRE( arr.get({30,0},4) == 0xe );
		}

		SECTION( "unalligned, max bit width" )
		{
			REQUIRE( arr.get({2,0},32) == 0x80000000 );
			REQUIRE( arr.get({2,1},32) == 0x00000000 );
			REQUIRE( arr.get({2,2},32) == 0x80000001 );
			REQUIRE( arr.get({2,3},32) == 0x00000001 );
			REQUIRE( arr.get({2,4},32) == 0x80000002 );
		}

		// SECTION( "output gets clipped at border" )
		// {
		// 	REQUIRE( arr.get({34,0},32) == 0x00 ); // 0x000000002 0x000000001
		// 	REQUIRE( arr.get({34,1},32) == 0x01 );
		// 	REQUIRE( arr.get({34,2},32) == 0x01 );
		// 	REQUIRE( arr.get({34,3},32) == 0x02 );
		// 	REQUIRE( arr.get({34,4},32) == 0x02 );
		// }
	// }

		SECTION( "access 8x8 pixel" )
		{
			/*
		  LSB ->
			 *----------------* LSB    MSB
			 |[]    []  []    |  10010100  0x29
			 |  [][]    []    |  01100100  0x26
			 |  [][]    []    |  01100100  0x26
			 |[]    []  []    |  10010100  0x29
			 |                |  00000000  0x00
			 |[][][][]    [][]|  11110011  0xCF
			 |          [][]  |  00000110  0x60
			 |        [][]    |  00001100  0x30
			 *----------------*
			               -> MSB
			 */
			display::PixelArray<8,8> arr2 = { 0x29262629,
			                                 0x3060CF00 };
			REQUIRE( arr2.size() == 2 );
			REQUIRE( arr2.data[0] == 0x29262629 );
			REQUIRE( arr2.data[1] == 0x3060CF00 );
			REQUIRE( arr2.get({0,0},32) == 0x29262629 );
			REQUIRE( arr2.get({0,4},32) == 0x3060CF00 );

			REQUIRE( arr2.get({0,0},8) == 0x29 );
			REQUIRE( arr2.get({0,1},8) == 0x26 );
			REQUIRE( arr2.get({0,2},8) == 0x26 );
			REQUIRE( arr2.get({0,3},8) == 0x29 );
			REQUIRE( arr2.get({0,4},8) == 0x00 );
			REQUIRE( arr2.get({0,5},8) == 0xCF );
			REQUIRE( arr2.get({0,6},8) == 0x60 );
			REQUIRE( arr2.get({0,7},8) == 0x30 );
			REQUIRE( arr2.get({2,0},4) == 0xa );

			REQUIRE( to_string(arr2) == "*----------------*\n"
			                            "|[]    []  []    |\n"
			                            "|  [][]    []    |\n"
			                            "|  [][]    []    |\n"
			                            "|[]    []  []    |\n"
			                            "|                |\n"
			                            "|[][][][]    [][]|\n"
			                            "|          [][]  |\n"
			                            "|        [][]    |\n"
			                            "*----------------*\n");
		}
	}

	SECTION( "set pixel in buffer<64x2>" )
	{
		display::PixelArray<64,2> buffer;
		buffer.clear();

		buffer.set( 0xff, { 2, 0 } );
		REQUIRE( buffer.get( { 0, 0 }, 8 ) == 0xfc );

		buffer.set( 0xf0ffff00, { 2, 0 } );
		REQUIRE( buffer.get( { 2, 0 } ) == 0xf0ffffff );

		REQUIRE( to_string(buffer) == "*--------------------------------------------------------------------------------------------------------------------------------*\n"
		                              "|    [][][][][][][][][][][][][][][][][][][][][][][][]        [][][][]                                                            |\n"
		                              "|                                                                                                                                |\n"
		                              "*--------------------------------------------------------------------------------------------------------------------------------*\n");
	}

	SECTION( "set pixel in buffer<3x3:8>" )
	{
		display::PixelArray<3,3, uint8_t> buffer = {0};

		SECTION( "check size" )
		{
			REQUIRE( buffer.size() == 2 );
		}

		SECTION( "set 0xff to {0,0}")
		{
			buffer.set(0xff, {0,0});
			REQUIRE( to_string(buffer) == "*------*\n"
			                              "|[][][]|\n"
			                              "|      |\n"
			                              "|      |\n"
			                              "*------*\n" );
		}

		SECTION( "set 0xff to {0,0}")
		{
			buffer.set(0xff, {1,0});
			REQUIRE( to_string(buffer) == "*------*\n"
			                              "|  [][]|\n"
			                              "|      |\n"
			                              "|      |\n"
			                              "*------*\n" );
		}

		SECTION( "set 0xff to {0,0}")
		{
			buffer.set(0xff, {2,0});
			REQUIRE( to_string(buffer) == "*------*\n"
			                              "|    []|\n"
			                              "|      |\n"
			                              "|      |\n"
			                              "*------*\n" );
		}

		SECTION( "set 0xff to {0,0}")
		{
			buffer.set(0xff, {3,0});
			REQUIRE( to_string(buffer) == "*------*\n"
			                              "|      |\n"
			                              "|      |\n"
			                              "|      |\n"
			                              "*------*\n" );
		}

		SECTION( "set 0xff to {0,0}")
		{
			buffer.set(0xff, {0,1});
			REQUIRE( to_string(buffer) == "*------*\n"
			                              "|      |\n"
			                              "|[][][]|\n"
			                              "|      |\n"
			                              "*------*\n" );
		}

		SECTION( "set 0xff to {0,0}")
		{
			buffer.set(0xff, {1,1});
			REQUIRE( to_string(buffer) == "*------*\n"
			                              "|      |\n"
			                              "|  [][]|\n"
			                              "|      |\n"
			                              "*------*\n" );
		}

		SECTION( "set 0xff to {0,0}")
		{
			buffer.set(0xff, {2,1});
			REQUIRE( to_string(buffer) == "*------*\n"
			                              "|      |\n"
			                              "|    []|\n"
			                              "|      |\n"
			                              "*------*\n" );
		}

		SECTION( "set 0xff to {0,0}")
		{
			buffer.set(0xff, {3,1});
			REQUIRE( to_string(buffer) == "*------*\n"
			                              "|      |\n"
			                              "|      |\n"
			                              "|      |\n"
			                              "*------*\n" );
		}

		SECTION( "set 0xff to {0,0}")
		{
			buffer.set(0xff, {0,2});
			REQUIRE( to_string(buffer) == "*------*\n"
			                              "|      |\n"
			                              "|      |\n"
			                              "|[][][]|\n"
			                              "*------*\n" );
		}

		SECTION( "set 0xff to {0,0}")
		{
			buffer.set(0xff, {1,2});
			REQUIRE( to_string(buffer) == "*------*\n"
			                              "|      |\n"
			                              "|      |\n"
			                              "|  [][]|\n"
			                              "*------*\n" );
		}

		SECTION( "set 0xff to {0,0}")
		{
			buffer.set(0xff, {2,2});
			REQUIRE( to_string(buffer) == "*------*\n"
			                              "|      |\n"
			                              "|      |\n"
			                              "|    []|\n"
			                              "*------*\n" );
		}

		SECTION( "set 0xff to {0,0}")
		{
			buffer.set(0xff, {3,3});
			REQUIRE( to_string(buffer) == "*------*\n"
			                              "|      |\n"
			                              "|      |\n"
			                              "|      |\n"
			                              "*------*\n" );
		}
	}

	SECTION( "set pixel in buffer<5x7:8>" )
	{
		display::PixelArray<5,7, uint8_t> buffer = {0};

		SECTION( "check size" )
		{
			REQUIRE( buffer.size() == 5 );
		}

		SECTION( "set 0xff to {0,0}")
		{
			buffer.set(0xff, {0,0});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|[][][][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {1,0}")
		{
			buffer.set(0xff, {1,0});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|  [][][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {2,0}")
		{
			buffer.set(0xff, {2,0});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|    [][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {3,0}")
		{
			buffer.set(0xff, {3,0});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|      [][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {4,0}")
		{
			buffer.set(0xff, {4,0});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|        []|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {5,0}")
		{
			buffer.set(0xff, {5,0});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {0,1}")
		{
			buffer.set(0xff, {0,1});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|[][][][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {1,1}")
		{
			buffer.set(0xff, {1,1});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|  [][][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {2,1}")
		{
			buffer.set(0xff, {2,1});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|    [][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {3,1}")
		{
			buffer.set(0xff, {3,1});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|      [][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {4,1}")
		{
			buffer.set(0xff, {4,1});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|        []|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {5,1}")
		{
			buffer.set(0xff, {5,1});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {0,2}")
		{
			buffer.set(0xff, {0,2});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|[][][][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {1,2}")
		{
			buffer.set(0xff, {1,2});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|  [][][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {2,2}")
		{
			buffer.set(0xff, {2,2});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|    [][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {3,2}")
		{
			buffer.set(0xff, {3,2});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|      [][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {4,2}")
		{
			buffer.set(0xff, {4,2});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|        []|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {5,2}")
		{
			buffer.set(0xff, {5,2});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {0,3}")
		{
			buffer.set(0xff, {0,3});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|[][][][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {1,3}")
		{
			buffer.set(0xff, {1,3});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|  [][][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {2,3}")
		{
			buffer.set(0xff, {2,3});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|    [][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {3,3}")
		{
			buffer.set(0xff, {3,3});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|      [][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {4,3}")
		{
			buffer.set(0xff, {4,3});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|        []|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {5,3}")
		{
			buffer.set(0xff, {5,3});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}





		SECTION( "set 0xff to {0,4}")
		{
			buffer.set(0xff, {0,4});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|[][][][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {1,4}")
		{
			buffer.set(0xff, {1,4});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|  [][][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {2,4}")
		{
			buffer.set(0xff, {2,4});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|    [][][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {3,4}")
		{
			buffer.set(0xff, {3,4});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|      [][]|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {4,4}")
		{
			buffer.set(0xff, {4,4});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|        []|\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {5,4}")
		{
			buffer.set(0xff, {5,4});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}





		SECTION( "set 0xff to {0,5}")
		{
			buffer.set(0xff, {0,5});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|[][][][][]|\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {1,5}")
		{
			buffer.set(0xff, {1,5});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|  [][][][]|\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {2,5}")
		{
			buffer.set(0xff, {2,5});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|    [][][]|\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {3,5}")
		{
			buffer.set(0xff, {3,5});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|      [][]|\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {4,5}")
		{
			buffer.set(0xff, {4,5});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|        []|\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {5,5}")
		{
			buffer.set(0xff, {5,5});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}







		SECTION( "set 0xff to {0,6}")
		{
			buffer.set(0xff, {0,6});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|[][][][][]|\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {1,6}")
		{
			buffer.set(0xff, {1,6});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|  [][][][]|\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {2,6}")
		{
			buffer.set(0xff, {2,6});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|    [][][]|\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {3,6}")
		{
			buffer.set(0xff, {3,6});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|      [][]|\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {4,6}")
		{
			buffer.set(0xff, {4,6});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|        []|\n"
			                              "*----------*\n" );
		}

		SECTION( "set 0xff to {5,6}")
		{
			buffer.set(0xff, {5,6});
			REQUIRE( to_string(buffer) == "*----------*\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "|          |\n"
			                              "*----------*\n" );
		}
	}
}


TEST_CASE( "iterator" )
{
	display::PixelArray<9,9> buffer = { 0xffffffff, 0xffffffff, 0xffffffff};

	auto it = buffer.begin( {10,10} );

	REQUIRE( it !=  buffer.end() );
	REQUIRE( it.value() == 0x1ff );

	++it;
	REQUIRE( it.dst() ==  display::Point({10, 11}) );

	++it;
	REQUIRE( it.dst() ==  display::Point({10, 12}) );

	++it;
	REQUIRE( it.dst() ==  display::Point({10, 13}) );

	++it;
	REQUIRE( it.dst() ==  display::Point({10, 14}) );

	++it;
	REQUIRE( it.dst() ==  display::Point({10, 15}) );

	++it;
	REQUIRE( it.dst() ==  display::Point({10, 16}) );

	++it;
	REQUIRE( it.dst() ==  display::Point({10, 17}) );

	++it;
	REQUIRE( it.dst() ==  display::Point({10, 18}) );

	++it;
	REQUIRE( it.dst() ==  display::Point({10, 19}) );
	REQUIRE( it == buffer.end() );
}