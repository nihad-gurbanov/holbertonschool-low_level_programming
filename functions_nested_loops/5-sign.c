#include "main.h"

/**
 * print_sign - a function that checks for sign of the character
 * @n: input for checking its sign
 * Return: 1 if argument is alphabetic 0 otherwise
 */

int print_sign(int n)
{
	if (n == 0)
	{	_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);

}

