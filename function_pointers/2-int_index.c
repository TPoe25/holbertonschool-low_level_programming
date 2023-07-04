#include "function_pointers.h"

/**
 * int_index - entry
 * @array: int
 * @size: int
 * @cmp: int
 * Return: result
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int list;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (list = 0; list < size; list++)
	{
		if (cmp(array[list]) != 0)
			return (list);
	}

	return (-1);

}
