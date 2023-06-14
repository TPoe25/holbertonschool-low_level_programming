#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: input
 * Return: 0
 */

int factorial(int n)
{
	int fact;

	if (n <= 1)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
	}
	return fact;
	if (n < 0)
	return (-1);
}
