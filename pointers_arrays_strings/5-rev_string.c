#include "main.h"

/**
 * rev_string - reverses the string
 * @s: char
 * Return: void
 */

void rev_string(char *s)
{
	int x, full, semi;
	char start, finish;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	
	full = x - 1;
	semi = full / 2;
	while (semi >= 0)
	{
		start = s[full - semi];
		finish = s[semi];
		s[semi] = start;
		s[full - semi] = finish;
		semi--;
	}

}
