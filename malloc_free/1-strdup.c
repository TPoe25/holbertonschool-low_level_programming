#include "main.h"
/**
 * _strlen - string length
 * @s: char pointer
 * Return: result
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 *  _strdup - returns pointers to a newly allocated space in memory
 *  @str: char
 *  Return: result
 */

char *_strdup(char *str)
{
	int i;
	int length;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	length = _strlen(str);
	s = malloc(sizeof(char) * length + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
