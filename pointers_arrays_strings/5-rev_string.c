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
	char emp_;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1, j = 0; ((i >= 0) && (j <= len / 2)); i--, j++)
	{
		emp_ = s[i];
		s[i] = s[j];
		s[j] = emp_;
	}
}

