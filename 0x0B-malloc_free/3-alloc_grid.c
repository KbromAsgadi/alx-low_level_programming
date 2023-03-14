#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*alloc_grid - function that returns a pointer to a 2 dimensional array
*@width: number of column
*@height: number of row
*Return: pointer to array or NULL if fail
*/
int **alloc_grid(int width, int height)
{
	int **c;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	c = malloc(sizeof(char) * height);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		c[i] = malloc(sizeof(char) * width);
		if (c[i] == NULL)
		{
			for (; i >= 0; i--)
				free(c[i]);
			free(c);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			c[i][j] = 0;
	}
	return (c);
}
