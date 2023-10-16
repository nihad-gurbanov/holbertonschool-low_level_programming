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
putchar(letter_);
}
for (letter_ = 'A'; letter_ <= 'Z'; letter_++)
{
putchar(letter_);
}
putchar('\n');
return (0);
}
