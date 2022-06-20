#include "main.h"
/**
 * print_chessboard - Write a function that prints the chessboard.
 * 6. Chess is mental torture
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int blk, wh;

	for (blk = 0; blk < 8; blk++)
	{
		for (wh = 0; wh < 8; wh++)
		{
			_putchar(a[blk][wh]);
		}
		_putchar('\n');
	}
}
