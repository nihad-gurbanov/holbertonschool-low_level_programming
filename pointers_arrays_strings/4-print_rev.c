#include "main.h"

/**
 * print_rev - is a function that prints a string, in reverse,
 * followed by a new line
 *
 * @s: is given string argument
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}

