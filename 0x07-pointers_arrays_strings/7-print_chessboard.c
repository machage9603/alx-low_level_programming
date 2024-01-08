#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (n = 0; n < 8; n++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[n][i]);

		}
		_putchar('\n');
	}
}

