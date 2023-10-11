#include "search_algos.h"
#include <math.h>

/**
 * min - funciton to find min value
 * @num1: num1
 * @num2: num2
 * Return: minimum value
 */
size_t min(size_t num1, size_t num2)
{
	return ((num1 > num2) ? num2 : num1);
}

int exponential_search(int *array, size_t size, int value);

/**
 * binary_search1 -  The function that uses binary searh alogarithm
 * @array: the array to be searched through
 * @value: element to to be searched
 * @low: is low bound to be searched through
 * @high: the low bound to be searched through
 * Return: elemnt if it exist otherwise -1
 */
int binary_search1(int *array, int value, size_t low, size_t high)
{
	size_t l, r, m, i;

	l = low;
	r = high - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, r);
	while (l <= r)
	{
		printf("Searching in array: ");

		for (i = l; i <= r; i++)
		{
			if (i < r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		m = floor((l + r) / 2);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}

/**
 * exponential_search - the the function to be searched through
 * @array: an array needed to be searched through
 * @size: the size of array
 * @value: a key to be searched
 * Return:  return index if the number is found otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (array == NULL)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	return (binary_search1(array, value, bound / 2, min(bound + 1, size)));
}
