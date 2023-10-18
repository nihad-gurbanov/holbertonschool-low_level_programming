#include "main.h"

/**
 * times_table - generates times table
 * Return: void
 */

void times_table(void)
{
	int i, j;
	int mult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;

			if (j > 0 && mult <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

			}
			else if (j > 0 && mult > 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (mult >= 10)
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
			else
			{
			_putchar(mult + '0');
			}
		}
		_putchar('\n');
	}
}

