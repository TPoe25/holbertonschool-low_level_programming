#include "main.h"

/**
 * puts_half -prints half of a string
 * @str: char
 * Return: 0
 */
void puts_half(char *str)
{
	int rope = 0;
	int x;

	while (str[rope] != '\0')
		rope++;
	if (rope + 1 % 2 != '0')
		x = ((rope - 1) / 2);
	else
		x = (rope / 2);

	for (rope = x; str[rope] != '\0'; rope++)
		_putchar(str[rope]);
	_putchar('\n');
}
