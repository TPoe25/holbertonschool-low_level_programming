#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - searches string and returns number of characters match
 * @s: 1st string
 * @accept: 2nd string
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				len++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
