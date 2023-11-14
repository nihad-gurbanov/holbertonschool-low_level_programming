#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 *
 * @size: size of array
 * @c: special character to initialize the array
 *
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';

	return (s);
}

