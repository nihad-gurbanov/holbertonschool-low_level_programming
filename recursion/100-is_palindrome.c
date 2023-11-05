#include <string.h>
#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: string argument
 * Return: 1 or 0
 */


int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] == s[end])
	{
		return (is_palindrome_recursive(s, start + 1, end - 1));
	}
	else 
	{
		return (0);
	}
}



int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}

