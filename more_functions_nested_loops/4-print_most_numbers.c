#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function that prints numbers
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
