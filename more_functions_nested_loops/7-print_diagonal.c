#include "main.h"
#include <stdio.h>

/**
 * print diagonal - draws a diagonal line on the terminal
 * @n: int
 * Return: void
 */

void print_diagonal(int n)
{
	int slash;

	if (n > 0)
	{
		for (slash = 0; slash < n; slash++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
