#include <stdio.h>


/**
 * main - prints numbers from 1 to 100,
 * replaces any number:
 * with "Fizz" if its reminder from division to 3 is 0
 * with "Buzz" if its reminder from division to 5 is 0
 * with "FizzBuzz" if its reminder from division to 15 is 0
 * Return: (0)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
