#include "main.h"

/**
 * test _itslower(int c ) - checks for lowercase letters
 *
 * return: 1 for lowercase characters, 0 if else
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
