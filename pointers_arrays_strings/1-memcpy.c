#include "main.h"


/**
 * _memcpy -is a function that copies memory area
 *
 * @dest: where to copy the memory to
 * @n: number of bytes
 * @src: the memory area to copy from
 *
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
