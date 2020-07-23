#pragma once
#include <stddef.h>

namespace pixel_display
{

int get_codepoint(char const* u, size_t l, size_t & i)
{
    if (l<1)
    	return -1;

    unsigned char u0 = u[0];
    ++i;
    if (u0<=127)
    	return u0;

    if (l<2)
    	return -1;

    unsigned char u1 = u[1];
    ++i;
    if (u0>=192 && u0<=223)
    	return (u0-192)*64 + (u1-128);

    if (u[0]==char(0xed) && (u[1] & 0xa0) == 0xa0)
    	return -1; //code points, 0xd800 to 0xdfff

    if (l<3)
    	return -1;

    unsigned char u2 = u[2];
    ++i;
    if (u0>=224 && u0<=239)
    	return (u0-224)*4096 + (u1-128)*64 + (u2-128);

    if (l<4)
    {
    	return -1;
    }

   	unsigned char u3 = u[3];
   	++i;

   	if (u0>=240 && u0<=247)
   		return (u0-240)*262144 + (u1-128)*4096 + (u2-128)*64 + (u3-128);

    return -1;
}

}