#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: result
 */

void *malloc_checked(unsigned int b)
{
	unsigned int  *alc;

	alc = malloc(b);

	if (alc == NULL)
		exit(98);

	return (alc);
}
