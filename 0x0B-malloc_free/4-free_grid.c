#include "main.h"

/**
 * free_grid - frees 2D grid created by alloc_grid
 * 4. It's not bragging if you can back it up
 * @grid: douple pointer 3d grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
