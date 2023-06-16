#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: input
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int height;
	int length;

	for (height = 0; height < 8; height++)
	{
		for (length = 0; length < 8; length++)
			_putchar(a[height][length]);
		_putchar('\n');
	}
}
