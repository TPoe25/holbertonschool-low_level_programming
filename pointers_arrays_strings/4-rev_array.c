#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses content of an array of ints
 * @a: int pointer
 * @n: interger
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
