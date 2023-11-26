#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns sum of its all parameters
 *
 * @n: number of parameters
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(arg_list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg_list, int);

	va_end(arg_list);
	return (sum);
}
