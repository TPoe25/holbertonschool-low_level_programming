#include "main.h"

/**
 * print_triangle - prints triangle on screen
 * @size: int 1
 * @left int 2
 * @right int 3
 * @top: int 4
 * Return: void
 */

void print_triangle(int size)
{
	int left;
	int right;
	int top;

	if (size > 0)
	{
		for (left = 1; left <= size; left++)
		{
			for (right = 1; right <= (size - left); right++)
			{
				_putchar(' ');
			}
			for (top = 1; top <= left; top++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
