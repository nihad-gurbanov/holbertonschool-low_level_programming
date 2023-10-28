#include "main.h"

/**
 * leet - is Write a function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @str: string argument
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j;
	char leet_chars[] =  "aAeEoOtTlL";
	char leet_encode[] =  "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_encode[j];
			}
		}

	}
	return (str);
}

