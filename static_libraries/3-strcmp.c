#include "main.h"
#include "string.h"

/**
 * _strcmp - function that compares 2 strings.
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (s1[comp] != '\0' && s2[comp] != '\0')
	{
		if (s1[comp] != s2[comp])
		{
			return (s1[comp] - s2[comp]);
		}
		comp++;
	}
	return (0);
}
