#include "main.h"

/**
 * more_numbers - a function that prints the numbers,
 * from 1-14, 10 times with new line at the end
 */

void more_numbers(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
			_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		j++;
	}

}

