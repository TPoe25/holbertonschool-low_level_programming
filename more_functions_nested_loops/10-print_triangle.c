#include "main.h"

/**
 * print_triangle - slashes on screen
 * @size: int
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
