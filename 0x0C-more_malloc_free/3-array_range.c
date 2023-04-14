#include <stdlib.h>
#include "main.h"
/**
 * *array_range - the function that return arrange of number
 * @min: min number
 * @max: max number
 *
 * Return: arry
 */
int *array_range(int min, int max)
{
	int *arr;
	int diff;
	int i = 0;

	if (min > max)
		return (NULL);
	diff = max - min;

	arr = malloc((diff + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (; i <= diff; i++)
		*arr = min, arr++;
	return (arr);
}
