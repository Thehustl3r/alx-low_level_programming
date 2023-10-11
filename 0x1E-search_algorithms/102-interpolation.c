#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search -  The function that uses binary searh alogarithm
 * @array: the array to be searched through
 * @size: size of the array
 * @value: element to to be searched
 * Return: elemnt if it exist otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	while ((array[high] != array[low]) &&
			(value >= array[low]) &&
			(value <= array[high]))
	{
		mid = low +
			(((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	if (value == array[low])
		return (low);

	if (mid >= size)
		printf("Value checked array[%ld] is out of range\n", mid);

	return (-1);
}
