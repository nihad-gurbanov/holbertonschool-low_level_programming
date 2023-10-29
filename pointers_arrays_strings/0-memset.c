#include "main.h"
/**
 * _memset - is a function that fills memory with a constant byte
 *
 * @s: pointer to memory area
 * @n: the number of bytes to fill
 * @b: constant
 *
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
