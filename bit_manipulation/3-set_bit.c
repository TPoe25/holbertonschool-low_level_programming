#include "main.h"

/**
 * set_bit - sets bit to 1 at a given index
 * @n: uns lng int
 * @index: ui
 * Return: result
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1 << index;
	
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= num;

	return (1);
}
