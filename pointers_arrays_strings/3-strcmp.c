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

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (s1 != s2)
		{
			comp = 1;
		}
		s1++;
		s2++;
	}
	if (*s1 != '\0' || *s2 != '\0')
		return 1;
	if (comp == 0)
		return 0;
	else
		return 1;
}
