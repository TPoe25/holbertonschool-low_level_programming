#include <stdio.h>
/**
 * main - prints letters
 * Return: Always (0)
 * description: prints the alphabet in lowercase
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}

	putchar('\n');
	return (0);
}
