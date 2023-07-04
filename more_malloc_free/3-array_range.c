#include "main.h"

/**
 * array_range - makes an array of intergers
 * @min: min
 * @max: max val
 * Return: result
 */

int *array_range(int min, int max)
{
	int *p;
	int range;
	int i;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	p = malloc(sizeof(*p) * range);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < range; min++, i++)
		p[i] = min;
	return (p);
}
