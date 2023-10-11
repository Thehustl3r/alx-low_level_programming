#include "search_algos.h"
#include <math.h>

/**
 * advanced_binary -  The function that uses left binary searh alogarithm
 * @array: the array to be searched through
 * @size: size of the array
 * @value: element to to be searched
 * Return: elemnt if it exist otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t l, r, m, i;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size;
	while (l < r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			if (i < r - 1)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		m = floor((l + r - 1) / 2);
		if (array[m] < value)
			l = m + 1;
		else
			r = m;
	}
	if (array[l] == value)
		return (l);

	return (-1);
}
