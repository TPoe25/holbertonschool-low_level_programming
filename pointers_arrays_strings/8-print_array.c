#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of ints
 * @a: paramater
 * @n: parameter
 * Return; nothing
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
