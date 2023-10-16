#include <stdio.h>

/**
 * main - this program prints base16
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter_;

	for (letter_ = '0'; letter_ <= '9'; letter_++)
	{
		putchar(letter_);
	}
	for (letter_ = 'a'; letter_ <= 'f'; letter_++)
	{
		putchar(letter_);
	}
		putchar('\n');

	return (0);
}

