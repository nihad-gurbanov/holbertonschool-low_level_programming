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
	for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}


	return (dest);
}

