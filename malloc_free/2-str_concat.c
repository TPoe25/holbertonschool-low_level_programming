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
/**
 * str_concat - funcation that concats two strings
 * @s1: int
 * @s2: int
 * Return: result
 */

char *str_concat(char *s1, char *s2)
{
	char *_strncat;
	int i;
	int strncat = 0;
	int dest = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 ==  NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		dest++;

	_strncat = malloc(sizeof(char) * dest);

	if (_strncat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
		_strncat[strncat++] = s1[i];

	for (i = 0; s2[i]; i++)
		_strncat[strncat++] = s2[i];

	return (_strncat);
	free(_strncat);
}
