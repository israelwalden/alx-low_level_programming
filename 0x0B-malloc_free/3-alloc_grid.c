#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a grid
 * @width: int variable
 * @height:int varaible
 * Return: pointer to or NULL
 */

int **alloc_grid(int width, int height)
{
	int **ptr;

	int i, j, k;

	if ((width == 0) || (height == 0))
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (0);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(ptr[j]);
			}
		free(ptr);
		return (0);
		}
		for (k = 0; k < width; k++)
		{
			ptr[i][k] = 0;
		}
	}
	return (ptr);
}
