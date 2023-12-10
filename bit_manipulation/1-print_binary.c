#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: given decimal.
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(n) * 8 - 1;
	int leading_zeros = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (shift >= 0)
	{
		if (n & (1ul << shift))
		{
			_putchar('1');
			leading_zeros = 0;
		}
		else if (!leading_zeros)
		{
			_putchar('0');
		}

		shift--;
	}
}

