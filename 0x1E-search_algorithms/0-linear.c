#include "search_algos.h"

/**
 * linear_search - function used to search with linear search
 * @array: the array to be searched through
 * @size: size fo an array
 * @value: the value of elment to be searched
 * Return: element if is found othorwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
