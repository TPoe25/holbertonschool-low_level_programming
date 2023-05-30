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

	for(width = 1; width <= 10; width++)
	{
		length = 0;

		while (length < 10)
		{
			num = width * length;
			_putchar(num);
			length++;
		}
	}
}
