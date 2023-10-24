#include "main.h"

/**
 * swap_int - is a function that swaps the values of two integers
 * @a: integer argument to swap
 * @b: integer argument to swap
 */


void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
