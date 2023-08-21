#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The index where value is located, or -1 if not found/array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	size_t i;

	if (array == NULL)
	{
		return (-1); }
	while (left <= right)
	{
		int middle = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = (size_t)left; i <= (size_t)right; i++)
		{
			printf("%d", array[i]);
			if (i < (size_t)right)
			{
				printf(", ");
			} }
		printf("\n");

		if (array[middle] == value)
		{
			return (middle); }
		if (array[middle] < value)
		{
			left = middle + 1; }
		else
		{
			right = middle - 1; } }

	return (-1);
}
