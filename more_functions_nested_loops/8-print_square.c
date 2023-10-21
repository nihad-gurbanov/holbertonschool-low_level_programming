#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: size is the size of square
 */

void print_square(int size)
{
	int width, height;

	if (size > 0)
	{
		for (width = 0; width < size; width++)
		{
			for (height = 0; height < size; height++)
			{
				_putchar('#');
			}

			if (width == (size - 1))
			continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
