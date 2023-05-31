#include "main.h"

/**
 * times_table - prints 9times table
 *
 * Return: void
 */

void times_table(void)
{
	int width; 
	int length;
	int num;
	int tens;
	int ones;

	for (width = 0; width <= 9; width++)
	{
		for (length = 0; length <= 9; length++)
		{
			num = width * length;
			tens = num / 10;
			ones = num % 10;

			if (length == 0)
			{
				_putchar('0');
			}
			else if (num < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
