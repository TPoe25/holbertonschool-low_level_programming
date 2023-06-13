#include "main.h"

/**
 * leet - encodes a string to leet
 * @n: interger
 * Return: n
 */

char *leet(char *n)
{
	int i, x;
	char s1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char s2[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x < 10; x++)
		{
			if (n[i] == s1[x])
			{
				n[i] = s2[x];
			}
		}
	}
	return (n);
}
