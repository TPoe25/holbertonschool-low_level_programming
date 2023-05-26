#include <stdio.h>
/**
 * main - putchar
 * Return: Always (0)
 * description: using putchar to print base 10 numbers
 **/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
