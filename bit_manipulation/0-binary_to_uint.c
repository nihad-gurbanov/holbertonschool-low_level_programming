#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary string
 * Return: converted value, or 0 if an error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int iter;

	if (b == NULL)
		return (0);

	for (iter = 0; b[iter] != '\0'; iter++)
	{
		if (b[iter] != '0' && b[iter] != '1')
			return (0);

		result = (result << 1) | (b[iter] - '0');
	}

	return (result);
}

