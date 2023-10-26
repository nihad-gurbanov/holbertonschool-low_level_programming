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
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		if ((result > INT_MAX / 10) || (result == INT_MAX /
					10 && digit > INT_MAX % 10))
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		result = result * 10 + digit;
		i++;
	}

	return (result * sign);
}

