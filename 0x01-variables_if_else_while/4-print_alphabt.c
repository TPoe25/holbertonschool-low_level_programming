#include <stdio.h>

/**
 * main - Entry Point
 *
 * description - printing alphabet minus q & e
 *
 * Return - Always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if ((x != 'e') && (x != 'q'))
			putchar(x);
	}

	putchar('\n');

	return (0);
}
