#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list arg_list;
	unsigned int i = 0;
	char *separator = "";
	char *str;

	va_start(arg_list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(arg_list, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg_list, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg_list, double));
				break;
			case 's':
				str = va_arg(arg_list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}

		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(arg_list);
}

