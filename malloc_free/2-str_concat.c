#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: interger
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int j;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[x] = src[j];
		x++;
		j++;
	}
	dest[x] = '\0';
	return (dest);
}

char *str_concat(char *s1, char *s2)
{
	int i;
	int dest;
	char *str;

	dest = _strncat(*s1, *s2, i);
	c = malloc(dest * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < dest; i++)
	{
		s1[i] = s2[i];
	}
	return (dest);
}
