#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 *
 * @min: first value of the range, included
 * @max: last value of the range, included
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int len = max - min + 1;

	if (min > max)
		return (NULL);

	arr = (int *)malloc(len * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}

