#include "main.h"
#include <stdlib.h>

/**
 * print_chessboard - prints the chessboard
 *
 * @a: number of rows
 */

void print_chessboard(char (*a)[8])
{
	int file, rank;

	for (file = 0; file < 8; file++)
	{
		for (rank = 0; rank < 8; rank++)
		{
			if (rank == 7)
			{
				_putchar(a[file][rank]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[file][rank]);
			}
		}
	}
}

