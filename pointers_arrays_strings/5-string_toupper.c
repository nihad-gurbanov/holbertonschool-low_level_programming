#include "main.h"

/**
 * string_toupper - is a function that changes all lowercase
 * letters of a string to uppercase
 * @c: argument
 * Return: char
 *
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
	}
	return (c);
}

