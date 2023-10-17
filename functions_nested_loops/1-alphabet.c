#include "main.h"
/**
 * print_alphabet - this program prints alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter_;

	for (letter_ = 'a'; letter_ <= 'z'; letter_++)
	{
	_putchar(letter_);
	}

	_putchar('\n');
}
