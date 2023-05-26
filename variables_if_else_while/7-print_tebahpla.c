#include <stdio.h>
/**
 * main - reverse
 * Return: always (0)
 * description: printing lowercase alphabet in reverse
 **/

int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha > 'a' ; alpha++)
	{
		putchar(alpha);
		alpha++;
	}
	return (0);
}
