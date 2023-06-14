#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion -
 * @s: input
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	return ;
	printf("%c", *s);
	_puts_recursion(s + 1);
	printf("\n");
}
