#include <stdlib.h>
#include "main.h"
/**
 * free_grid - the function to free
 * @grid: pointer of pointer
 * @height: integer height
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	if (height)
		free(grid);
	else
		return;
}
