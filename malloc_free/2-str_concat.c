#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer to first string input
 * @s2: pointer to second string input
 *
 * Return: pointer to the concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int i, j, len1 = 0, len2 = 0, len_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	len_concat = len1 + len2 + 1;
	concatenated = malloc(len_concat * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < len2; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}
