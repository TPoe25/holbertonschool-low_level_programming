#include "main.h"

/**
 * reverse_array - reverses content of an array of ints
 * @*a: int pointer
 * @n: interger
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	while (a[n] != '\0' && a[n] > 0)
	{
		a++;
		a--;
	}
	a--;
}
