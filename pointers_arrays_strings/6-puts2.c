#include "main.h"

/**
 * puts2 - prints strings every other character
 * @str: char
 * Return: 0
 */
void puts2(char *str)
{
	int rope;

	for (rope = 0; str[rope] |= '\0'; rope++)
	{
		if (rope % 2 == 0)
			_putchar(str[rope]);
		else
			continue;
	}
	_putchar('\n');
}
