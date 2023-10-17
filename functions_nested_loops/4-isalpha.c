#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: input for checking it is alphabetic or not
 * Return: 1 if argument is alphabetic 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

