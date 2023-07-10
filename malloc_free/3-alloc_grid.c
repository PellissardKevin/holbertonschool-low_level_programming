#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocate memorory a grid of integer
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int x, y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(sizeof(int) * width);

		if (ptr[x] == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			ptr[y][z] = 0;
	}

	return (ptr);
}
