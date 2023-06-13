#include "main.h"
#include <string.h>

/**
 * cap_string - Capatalizes all words of a string.
 * @n: pointer
 * Return: n
 */


char *cap_string(char *n)
{
	int i = 0;
	int c;
	char str[] = {44, 59, 46, 21, 63, 22, 40, 41, 123, 125, '\n', '\t', ' '};

	while (n[i] != '\0')
	{
		for (c = 0; str[c]; c++)
		{
			if (n[i - 1] == str[c] && str[i] >= 97 && str[i] <= 122)
			{
				n[i] = n[i] - 32;
			}
		}
		i++;
	}
	if (n[0] >= 97 && n[0] <= 122)
	{
		n[0] = n[0] - 32;
	}
	return (n);
}
