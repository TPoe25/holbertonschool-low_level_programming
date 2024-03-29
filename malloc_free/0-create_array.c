#include "main.h"

/**
 * create_array - creates an array of chars and initlizes it with a spec. char
 * @size: unsigned int
 * @c: c
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int length;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(*s));
	if (s == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (length < size)
	{
		s[length] = c;
		length++;
	}
	s[length] = '\0';
	return (s);
}
