#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the t
 * @n: n is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int width, space;

	if (n > 0)
	{
		for (width = 0; width < n; width++)
		{
			for (space = 0; space < width; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');

			if (width == (n - 1))
			continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
