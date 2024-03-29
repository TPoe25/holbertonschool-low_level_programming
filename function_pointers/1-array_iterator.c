#include "function_pointers.h"

/**
 * array_iterator - entry
 * @array: int ptr
 * @size: size
 * @action: ptr
 * Return: result
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
