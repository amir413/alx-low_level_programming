#include "main.h"

/**
 * print_chessboard - prints chessboard.
 *
 * $a: rows.
 * Return: nothing.
 */

void print_chessboard(char (*a)[8])
{
	int h, b;

	for (h = 0; h < 8; h++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[h][b]);
		}
		_putchar('\n');
	}
}
