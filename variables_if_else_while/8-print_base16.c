#include <stdio.h>
/**
 * main - base 16
 * Return: always (0)
 * description: using %x to convert base 16 to hexidecimal
 **/

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
