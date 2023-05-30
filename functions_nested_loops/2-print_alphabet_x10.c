#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * 
 * Return: Always (0)
 */

void print_alphabet_x10(void)
{
	int list = 0;

	while (list < 10)
	
	{	
		char alpha;

		alpha= 'a';
		
		while (alpha <= 'z')
		{
			_putchar(alpha);
		
			alpha++;
		}
	
	_putchar('\n');
	
	list++;
	
	}
}
