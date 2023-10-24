#include "main.h"

/**
 * _puts - is  a function that prints a string,
 * followed by a new line, to stdout
 *
 * @str: string for printing to stdout
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

