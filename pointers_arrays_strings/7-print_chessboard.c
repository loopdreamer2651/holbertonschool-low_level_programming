#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to a 2D array of 8x8 characters
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			_putchar(a[row][col]);
		_putchar('\n');
	}
}
