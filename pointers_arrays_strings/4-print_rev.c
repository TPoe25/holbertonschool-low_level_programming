#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: char
 * Return: void
 */

void print_rev(char *s)
{
	int backup = 0;

	while (s[backup] != '\0')
	{
		backup++;
	}

	backup--;

	while (backup >= 0)
	{
		_putchar(s[backup]);
		backup--;
	}
	_putchar('\n');
}
