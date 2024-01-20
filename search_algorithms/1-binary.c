#include <stddef.h>
#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @left: start index of array
 * @right: end index of array
 */
void print_array(int *array, size_t left, size_t right)
{
	if (array != NULL && left <= right)
	{
		printf("Searching in array: %d", array[left]);
		while (++left <= right)
			printf(", %d", array[left]);

		printf("\n");
	}
}

/**
 * binary_search - searches for a value in an array of integers using the
 * Binary search algorithm
 *
 * @array: pointer to the array
 * @size: size of array
 * @value: the value that linear search algorithm is searching for
 * Return: index of given value if exists or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		print_array(array, left, right);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
