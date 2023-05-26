#include <stdio.h>
/**
 * main - prints alphabet
 * Return: Always (0)
 * description: printing lowercase alphabet except q e
 */


int main(void)
{
	char alphabet = 'a';
	
	while (alphabet <= 'z')
	
	if ((alphabet!='e')&&(alphabet!='q'))
	{
		
		putchar(alphabet);

		alphabet++;

	}
	putchar('\n');

	return (0);
}
