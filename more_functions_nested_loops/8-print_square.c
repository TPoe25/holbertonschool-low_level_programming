#include "main.h"
#include <stdio.h>

/**
 * print_square - prints square in terminal
 * @size: interger
 * Return: void
 */

void print_squares(int size)
{
	int length;
	int height;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
		for (height = 0; height < size; height++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
