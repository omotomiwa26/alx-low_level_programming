#include "main.h"

/**
 * free_grid - functions frees 2d array of alloc_grid
 * @grid: 2-d array
 * @height: integer variable height
 * Description: frees memory of grid
 * Return: NULL
 *
 */

void free_grid(int **grid, int height)

{
	int z;

	for (z = 0; z < height; z++)

	{
		free(grid[z]);
	}
	free(grid);
}
