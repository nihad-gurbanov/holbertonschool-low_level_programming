#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for
 * an amount of money
 *
 * @argc: count of arguments
 * @argv: vector of arguments
 * Return: number of coins
 */


int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		int coins[] = {25, 10, 5, 2, 1};
		int numCoins = 0;

		int i;

		for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			numCoins++;
		}
	}

	printf("%d\n", numCoins);
	}

	return (0);
}

