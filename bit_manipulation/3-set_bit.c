#include "main.h"

/**
 * set_bit - set bit to 1 at a given index.
 * @n: pointer to given number.
 * @index: index.
 * Return: 1 if success, otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);

	*n = *n | (1ul << index);
	return (1);
}

