#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a new string which is a
 * duplicate of the string str
 *
 * @str: pointer to string input
 *
 * Return: pointer to the array or NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, len;

	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}
	len++;

	duplicate = malloc(len * sizeof(char));

	i = 0;
	while (i < len)
	{
		if (duplicate == NULL)
		{
			return (NULL);
		}
		duplicate[i] = str[i];
		i++;
	}
	return (duplicate);
}
