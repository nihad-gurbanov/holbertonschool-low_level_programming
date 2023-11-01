#include <stdlib.h>
#include <stdio.h>


/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Success (0)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
