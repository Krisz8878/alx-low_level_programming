#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of integers.
 * @grid: the 2D array of integers to be freed.
 * @height: the height of the grid.
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
