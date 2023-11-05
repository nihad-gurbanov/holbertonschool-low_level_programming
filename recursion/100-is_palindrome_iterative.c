#include <string.h>
#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: string argument
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i <= len / 2; i++)
	{
		if (s[i] != s[len - 1 - i])
		{
			return (0);
		}
	}

	return (1);
}

