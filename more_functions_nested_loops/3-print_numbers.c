#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * Return: 0
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
