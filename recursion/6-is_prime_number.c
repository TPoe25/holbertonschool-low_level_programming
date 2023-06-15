#include "main.h"

/**
 * is_prime - calculating if a number is prime
 * @num: input
 * @r: input
 * Return: is_prime
 */
int is_prime(int num, int r)
{
	if (num % r == 0)
	{
		return (0);
	}
	if (r == num / 2)
	{
		return (1);
	}
	return is_prime(num, r + 1);
	
}
/**
 * is_prime_number - returns if input interger is prime number
 * @n: input
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n < 4)
	{
		return (1);
	}

	return(is_prime(n, 2));
}
