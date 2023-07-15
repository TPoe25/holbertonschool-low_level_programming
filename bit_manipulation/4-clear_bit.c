#include "main.h"

/**
 * clear_bit - 
 * @n: parameter
 * @index: unsigned int
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~num;

	return (1);
}
