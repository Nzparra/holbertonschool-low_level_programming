#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Return a opinter to a 2 dimensional array of in
 * @width: dimension n
 * @height: dimension m
 * Return: Null size == 0 or concat
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int n;
	int m;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < height; n++)
	{
		grid[n] = malloc(width * sizeof(**grid));
		if (grid[n] == NULL)
		{
			for (n--; n >= 0; n--)
			{
				free(grid[n]);
			}
			free(grid);
			return (NULL);
		}
		for (m = 0; m < width; m++)
		{
			grid[n][m] = 0;
		}
	}
	return (grid);
}
