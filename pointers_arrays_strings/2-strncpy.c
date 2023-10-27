#include <stdio.h>
#include "main.h"

/**
 * _strncpy - is a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: argument for destination
 * @src: argument for source
 * @n: copies given n amount of characters from src to dest
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len_src;

	for (len_src = 0; src[len_src] != '\0'; len_src++)
	{
		;
	}

	if (len_src >= n)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}

	else
	{
		n = len_src;
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';
	}


	return (dest);
}

