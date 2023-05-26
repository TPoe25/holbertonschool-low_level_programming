#include <stdio.h>
/**
 * main - prints alphabet
 * Return: Always (0)
 * description: printing lowercase alphabet except q e
 */


int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if ((alphabet != 'e') && (alphabet != 'q'))

			putchar(alphabet);

	}
	
	putchar('\n');

	return (0);
}
