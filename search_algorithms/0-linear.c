#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 *
 * @array: pointer to the array
 * @size: size of array
 * @value: the value that linear search algorithm is searching for
 * Return: index of given value if exists or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array != NULL)
	{
		for (index = 0; index < size; index++)
		{
			printf("Value checked array[%lu] = [%i]\n", index, array[index]);

			if (array[index] == value)
				return (index);
		}
	}

	return (-1);
}
