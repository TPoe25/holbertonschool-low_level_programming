#include "main.h"

/**
 * print_last_digit(int) - prints last digit of a number
 * @n: input
 * Return: n
 */

int print_last_digit(int num)
{
	int digit = num % 10;

	if (num < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return(digit);
}
