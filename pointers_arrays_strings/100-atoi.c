#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - a function that convert a string to an integer
 *
 * @s: string argument
 * Return: integer
 */

int _atoi(char *s)
{
	int index = 0;
	unsigned int result = 0;
	int sign = 1;
	int foundDigits = 0;

	while (s[index])
	{
		if (s[index] == '-')
		{
			sign *= -1;
		}

		while (s[index] >= '0' && s[index] <= '9')
		{
			foundDigits = 1;
			result = (result * 10) + (s[index] - '0');
			index++;
		}

		if (foundDigits)
		{
			break;
		}

		index++;
	}

	result *= sign;
	return (result);
}

