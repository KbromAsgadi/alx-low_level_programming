#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);
		if (mee[x] == NULL)
		{
			x = 0;
			while (x >= 0)
			{
				free(mee);
				x--;
			}
			return (NULL);
		}
	}
	x = 0;
	while (x < height)
	{
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
		x++;
	}
	return (mee);
}
