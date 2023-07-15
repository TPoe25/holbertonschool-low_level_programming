#include "main.h"

/**
 * flip_bits - returns the number of bits you need to get from on number to another
 * @n: parameter
 * @m: parameter
 * Return: result
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int num = 0;

	while (x != 0)
	{
		num += x & 1;
		x >>= 1;
	}

	return (num);
}
