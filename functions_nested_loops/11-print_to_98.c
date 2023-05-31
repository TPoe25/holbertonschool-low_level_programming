#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * @n: interger
 * Return: 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
