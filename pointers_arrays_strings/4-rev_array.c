#include "main.h"

/**
 * reverse_array - is a function that reverses the content of
 * an array of integers
 *
 * @a: array
 * @n: is the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp_var;

	for (i = 0; i < (n / 2); i++)
	{
		temp_var = a[i];
		a[i] = a[n - i];
		a[n - i] = temp_var;
	}
}
