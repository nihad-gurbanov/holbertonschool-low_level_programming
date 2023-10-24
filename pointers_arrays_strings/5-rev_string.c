#include "main.h"

/**
 * rev_string - is a function that prints a string, in reverse,
 * followed by a new line
 *
 * @s: is given string argument
 */

void rev_string(char *s)
{
	int len;
	int i;
	int j;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1, j=0; ((i >= 0) && (j <= len - 1)) ; i--, j++)
	{
		s[i] = s[j];

	}
}

