#include "main.h"

/**
 * _puts - prints string and a new line
 * @str: char
 * Return: void
 */

void _puts(char *str)
{
	int place;
	for (place = 0; *(str + place) != '\0'; place++)
	{
		_putchar(*(str + place));
	}
	_putchar('\n');
}
