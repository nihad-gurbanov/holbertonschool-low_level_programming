#include "main.h"

/**
 * _strlen - is a function that returns the length of a string
 * @s: string argument for calculating its length
 * Return: len of s - given string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

