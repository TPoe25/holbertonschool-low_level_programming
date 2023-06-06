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
	int digits;

	for (list = 0; list < 10; list++)
	{
		for (digits = 0; digits < 15; digits++)
		{
			if (digits >= 10)
			{
				_putchar(digits / 10 + '0');
			}
			_putchar(digits % 10 + '0');
		}
		_putchar('\n');
	}
}
