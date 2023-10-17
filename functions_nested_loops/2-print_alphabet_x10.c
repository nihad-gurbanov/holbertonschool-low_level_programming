#include "main.h"
/**
 * print_alphabet_x10 - this program prints alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int n;
	char letter_;

	n = 0;
	while (n < 10)
	{
	for (letter_ = 'a'; letter_ <= 'z'; letter_++)
	{
	_putchar(letter_);
	}

	_putchar('\n');
	n++;
	}
}
