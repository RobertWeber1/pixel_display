#include "font.h"

namespace display
{


namespace font
{

/*
*-0-1-2-3-4-5-6-7-8-9*
0                    |  0000000000
1                    |  0000000000
2    [][][][][][]    |  0011111100
3                []  |  0000000010
4                []  |  0000000010
5        [][][][][]  |  0000111110
6    [][]        []  |  0011000010
7  []            []  |  0100000010
8  []            []  |  0100000010
9  []          [][]  |  0100000110
A    [][][][][]  []  |  0011111010
B                    |  0000000000
*--------------------*

lsb                             msb
0x00     0x00     0x0C     0xF0                 msb    lsb
00000000.00000000.00000011.11110000             0x0FC00000
0x40     0x00     0xC1     0xC7
00000010.00000000.10000011.11100011             0xC7C10040
0x90     0x40     0x02     0x09
00001001.00000010.01000000.10010000             0x09024090
0xC6     0x17     0x00     0x00
01100011.11101000.00000000.00000000             0x000071C6
 */


constexpr GlypeTable<10,12,1> SinkinSans10 = {
	{ 0, 12, 19, -1, -5, 8, 1, 182, 3, 122, 32, 255, 254, 11, 254 },
	&normal_lockup,
	{ { { 1, 2 }, 10, { 0x0FC00000, 0xC7C10040, 0x09024090, 0x000017C6 } } }
};


} //namespace font

} //namespace display
