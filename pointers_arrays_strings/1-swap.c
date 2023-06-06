#include "main.h"

/**
 * swap_int - swaps values of 2 intergers
 * @a: first parameter
 * @b: second parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
