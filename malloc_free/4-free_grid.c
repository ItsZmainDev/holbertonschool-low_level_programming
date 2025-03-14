#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by your alloc_grid function
 * @grid: 2D grid
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
