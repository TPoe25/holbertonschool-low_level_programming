#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: parameter
 * Return: result
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n & num) != 0);
}
