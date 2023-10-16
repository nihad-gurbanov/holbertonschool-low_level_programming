#include <stdio.h>

/**
 * main - this program prints alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter_;

	for (letter_ = 'a'; letter_ <= 'z'; letter_++)
	{
	putchar(letter_);
	}

	putchar('\n');
	return (0);
}
