#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: separates numbers
 * @n: count of numbers
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_list, int));
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}

	}
	printf("\n");

}
