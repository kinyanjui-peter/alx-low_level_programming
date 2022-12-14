#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - multidimemsional grid
 * @width: width dimemsion
 * @height: height dimension
 * Return: null for failure
 */

int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		ptr[x] = (int *)malloc(sizeof(int) * width);
			if (ptr[x] == NULL)
			{
			for (x = x - 1; x >= 0; x--)
			{
			free(ptr[x]);
			}
			free(ptr);
			return (NULL);
			}
	}
	for (x = 0; y < width; y++)
	{
	ptr[x][y] = 0;
	}
	return (ptr);
}
