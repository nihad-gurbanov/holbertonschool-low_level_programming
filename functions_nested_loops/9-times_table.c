#include "main.h"

void times_table(void)
{
	int i, j;
	int mult;

	for(i = 0; i <= 9; i++)
	{
		for(j = 0; j <= 9; j++)
		{
			mult = i*j;
			if (mult>9)
			{
			_putchar(mult/10 + '0');
			_putchar(mult%10 + '0');
			_putchar(',');
			_putchar(' ');
			}
			else
			{
			_putchar(mult + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
	
		}
		_putchar('\n');
	}
}
