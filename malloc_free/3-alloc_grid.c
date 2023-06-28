#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entrypoint
 * @width: int
 * @height: int
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **array, i, x;
	int length = width * height;

	if (length <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(array[i]);
			free(array);
			return (NULL);
		}
	}
for (i = 0; i < height; i++)
for (x = 0; x < width; x++)
array[i][x] = 0;
return (array);
}
