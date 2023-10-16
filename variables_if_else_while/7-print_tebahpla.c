#include <stdio.h>

/**
 * main - this program prints reverse alphabet
 * Return: Always (0)
 */

int main(void)
{
	char letter_;

	for (letter_ = 'z'; letter_ >= 'a'; letter_--)
	{
		putchar(letter_);
	}
	putchar('\n');
	return (0);
}
