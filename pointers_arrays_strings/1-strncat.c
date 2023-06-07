#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest:
 * @src:
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int j = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[j] != '\0')
	{
		dest[x] = src[j];
		x++;
		j++;
	}
	if (src[n] > '\0')
	{
		dest[x] = src[j];
		x++;
		j++;
	}
	dest[x] = '\0';	
	return (dest);
}
