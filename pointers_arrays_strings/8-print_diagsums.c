#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 *
 * @a: given matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int row = 0;
	int col = size - 1;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	while (row < size)
	{
		sum_diag1 += a[row * size + row];
		row++;
	}

	row = 0;

	while (row < size)
	{
		sum_diag2 += a[row * size + col];
		row++;
		col--;
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}

