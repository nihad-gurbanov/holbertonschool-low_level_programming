#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: destination string argument
 * @src: source string argument
 *
 * Return: returns concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len_dest;

	i = 0;
	len_dest = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}


	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}

	return (dest);
}
