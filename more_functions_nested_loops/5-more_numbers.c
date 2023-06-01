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

	while (list < 11)
	{
		char numbers;

		numbers = '0';

		while (numbers <= '14')
		{
			_putchar(numbers);

			numbers++;
		}

	_putchar('\n');

	list++;
	
	}

}
