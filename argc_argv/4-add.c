#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int i, j;


	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	if (argc == 1)
	{
		printf("%d\n", add);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}

	return (0);
}
