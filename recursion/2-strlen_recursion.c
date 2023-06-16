#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: input
 * Return: result
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);

	}
	else
		return (1 + _strlen_recursion(s + 1));
}
