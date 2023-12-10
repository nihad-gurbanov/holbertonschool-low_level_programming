#include "main.h"

/**
 * flip_bits - finds number of bits that are different.
 * @n: first number.
 * @m: second number.
 * Return: number of different bit occurrences.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int xor_result = n ^ m;
	
	while (xor_result)
	{
		counter += xor_result & 1;
		xor_result >>= 1;
	}

	return (counter);
}

