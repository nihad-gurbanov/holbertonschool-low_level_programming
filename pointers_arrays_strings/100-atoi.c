#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer
 * 
 * @s: string argument
 * Return: integer
 */

int _atoi(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			putchar(s[i] * 10);
		}
	}
	return (0);
}
