#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - Funtion to use
 *@width: the size if the first array
 *@height: size of second array
 *Return: pointer to the 2d Array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * (height));
	if (grid == NULL)
	{
		return (NULL);
	}
		/*if memory is not allocated*/

	for (; i < height; i++)
	{

	grid[i] = malloc(sizeof(int) * width);

	if (grid[i]  == NULL)
	{
		for (; j < i; j++)
		{
		free(grid[j]);
		}
		free(grid);
		return (NULL);
	}
	for (; j < width; j++)
	{
		grid[i][j] = 0;
	}
	}
	return (grid);
}
