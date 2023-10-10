#include "search_algos.h"
#include <math.h>

/**
 * binary_search -  The function that uses binary searh alogarithm
 * @array: the array to be searched through
 * @size: size of the array
 * @value: element to to be searched
 * Return: elemnt if it exist otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m, i;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i < r)
				printf("%d,", array[i]);
			else
				printf("%d\n", array[i]);
		}

		m = floor((l + r) / 2);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (array[m]);
	}

	return (-1);
}
