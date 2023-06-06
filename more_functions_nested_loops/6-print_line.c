#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a straight line in terminal
 *
 * Return: void
 */

void print_line(int n)
{
	int c;

	if (n > 0)
	{
	for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
