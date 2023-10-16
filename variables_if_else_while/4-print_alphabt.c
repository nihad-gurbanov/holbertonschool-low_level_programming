#include <stdio.h>

/**
 * main - this program prints alphabets
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter_;

	for (letter_ = 'a'; letter_ <= 'z'; letter_++)
	{
		if (letter_ != 'e' && letter_ != 'q')
		{
			putchar(letter_);
		}
	}
	putchar('\n');
	return (0);
}
