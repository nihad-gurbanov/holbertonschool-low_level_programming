#include "main.h"

/* puts_half - is a function that prints half of a string,
 * followed by a new line
 *
 * @str: string argument
 */

void puts_half(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		int i;

		for (i = len / 2; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}

	else 
	{
		 int i;

                for (i = (len - 1) / 2; i <= len - 1; i++)
                {
                        _putchar(str[i]);
                }
	}

	_putchar('\n');
}

