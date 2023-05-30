#include "main.h"

/**
 * _islower - checks whether a character is lowercase alphabet or not
 *
 * Return: 1 if lowercase, 0 if else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
