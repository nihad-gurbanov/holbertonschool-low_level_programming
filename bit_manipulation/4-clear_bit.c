#include "main.h"

/**
 * clear_bit - set bit to 0 at a given index.
 * @n: pointer to given number.
 * @index: index.
 * Return: 1 if success, otherwise -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}

