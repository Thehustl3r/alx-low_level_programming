#include "function_pointers.h"
/**
 * int_index - print index of array
 * @array: the address of array
 * @size: size of array
 * @cmp: pointer function
 * @Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
