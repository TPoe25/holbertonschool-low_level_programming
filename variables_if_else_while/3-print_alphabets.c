#include <stdio.h>
#include <ctype.h>

/**
 * main - prints letters
 * Return: Always (0)
 * description: prints upper and lowercase letters
 **/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);

	putchar('\n');

return (0);
}
