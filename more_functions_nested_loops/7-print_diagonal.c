#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: int
 * Return: void
 */

void print_diagonal(int n)
{
	int list;
	int slash;

	if (n > 0)
	{
		for (list = 0; list < n; list++)
		{
		for (slash = 0; slash < list; slash++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
