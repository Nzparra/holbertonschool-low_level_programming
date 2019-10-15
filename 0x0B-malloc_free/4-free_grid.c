#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - Frees 2D grid
 * @grid: pointer
 * @height: dimension
 * Return: Null
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
