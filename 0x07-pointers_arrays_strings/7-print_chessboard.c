#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: 2D array representing the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(board[i][j]);

		}
		_putchar('\n');
	}
}
