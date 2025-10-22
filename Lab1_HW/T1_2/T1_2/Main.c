#include <stdio.h>

#define USE_Header1_h 1 /*Change to 0 to use Header2*/

/*
	#if,#else,#endif lets us choose the header by setting the macro, making it easier to switch between them.
*/

#if USE_Header1_h
#include "Header1.h"
#else
#include "Header2.h"
#endif

int main()
{
	f();

	return 0;
}