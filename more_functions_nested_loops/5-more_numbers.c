#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int list;

	for (list = 0; list < 15; list++)
	{
		_putchar(list);
	}
	_putchar('\n');
}
