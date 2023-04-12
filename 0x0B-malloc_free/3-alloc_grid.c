#include <stdlib.h>
#include "main.h"
/**
 * **allloc_grid - the function to print two dimension array
 * @width: value of width
 * @height: value of length
 *
 * Return: 2 dimension arrray
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int **grid;

	if (width == 0 || height == 0)
		return (0);
	grid = (int **)malloc((width * height) * sizeof(int));

	for (; i < (height * width); i++)
		grid[i] = 0;

	return (grid);
}
