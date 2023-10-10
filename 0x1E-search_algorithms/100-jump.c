#include "search_algos.h"
#include <math.h>

/**
 * min - function to find the minimum
 * @a: first integer
 * @b: second integer
 * Return: min interger
 */
size_t min(int a, int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}
/**
 * jump_search -  The function that uses jump searh alogarithm
 * @array: the array to be searched through
 * @size: size of the array
 * @value: element to to be searched
 * Return: elemnt if it exist otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, step, n;

	if (array == NULL)
		return (-1);

	n = size;
	prev = 0;
	step = (int)sqrt(n);
	printf("Value checked array[0] = [%d]\n", array[0]);
	if (array[0] == value)
		return (0);
	while (array[min(step, n)] < value)
	{
		printf("Value checked array[%ld] = [%d]\n",
			(min(step, n)), array[min(step, n)]);

		prev = step;
		step += (int)sqrt(n);
		if (prev >= n)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (prev == min(step, n))
			return (-1);
		prev++;
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return (array[prev]);
	}

	return (-1);
}
