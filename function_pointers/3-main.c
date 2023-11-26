#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - calculate based on given operation and integers
 *
 * @argc: count of arguments
 * @argv: vector of arfuments
 * Return: calculation
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	if (
			(strcmp(argv[2], "/") == 0 ||
			 strcmp(argv[2], "%") == 0) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));

	return (0);

}
