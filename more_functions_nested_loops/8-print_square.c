#include "main.h"

/**
 * print_square - prints square in terminal
 * @size: interger
 * Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int length = 1;

		while (length <= size)
		{
			int width = 1;

			while (width <= size)
			{
				_putchar('#');
				width++;
			}
			_putchar('\n');
			length++;
		}
	}
	_putchar('\n');
}
