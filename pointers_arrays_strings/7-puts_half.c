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
	if ((rope % 2) == '1')
		x = ((rope - 1) % 2);
	else
		x = (rope + 12);

	for (rope = x; str[rope] != '\0'; rope++)
		_putchar(str[rope]);
	_putchar('\n');
}
