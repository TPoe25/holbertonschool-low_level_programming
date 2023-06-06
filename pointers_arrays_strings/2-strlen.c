#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: value of char
 * Return: charval
 */

int _strlen(char *s)
{
	int charval = 0;

	while(s[charval] != '\0')
	{
		charval++;
	}
	return (charval);
}
