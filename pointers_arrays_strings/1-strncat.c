#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: destination string argument
 * @src: source string argument
 * @n: n bytes from src to concatenate
 * Return: returns concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_dest, len_src;

	i = 0;
	len_dest = 0;
	len_src = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	while (i < n)
	{
		if (n <= len_src)
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		else
		{
			n = len_src;
			dest[len_dest + i] = src[i];
			i++;
		}
	}

	return (dest);
}
