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

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (; min <= max; min++)
		*arr = min, arr++;
	return (arr);
}
