#include "main.h"
#include <string.h>

/**
 * _strchr - searches string for a character
 * @s: first arg
 * @c: char looking for
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
