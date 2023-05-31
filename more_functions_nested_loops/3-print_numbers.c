#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * Return: 0
 */

void print_numbers(void)
{
	char num;

	num = 0;

	while (num <= '9')

	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
