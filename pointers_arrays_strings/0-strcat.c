#include "main.h"

/**
 * _strcat -concatenates two strings
 * @dest: string
 * @src: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x=0;
	int j=0;

	while(dest[x] != '\0')
	{
		++dest;
		x++;
	}
	while(src[j] != '\0')
	{
		dest=src;
		dest++;
		src++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
