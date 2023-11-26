#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: separates strings
 * @n: count of strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;
	char *ptr;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(arg_list, char *);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s", ptr);

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(arg_list);

}
