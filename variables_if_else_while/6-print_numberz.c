#include <stdio.h>

/**
 * main - this program prints numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_;

	for (digit_ = 0; digit_ < 10; digit_++)
		putchar((digit_ % 10) +'0');

	putchar('\n');

	return (0);
}
