#include "main.h"

/**
 * free_grid - frees grids memory
 * @grid: int
 * @height: int
 * Return: free
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}
