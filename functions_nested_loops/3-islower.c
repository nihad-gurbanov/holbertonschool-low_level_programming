#include "main.h"

/*
 * _islower - a function that checks for lowercase character
 * Return: 1 if argument is lowercase o otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

