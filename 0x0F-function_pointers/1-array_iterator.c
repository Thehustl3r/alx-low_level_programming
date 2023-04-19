#include "function_pointers.h"
/**
 * array_iterator - function that act as it commanded
 * @array: address of an array
 * @size: size of an array
 * @action: pointer to a function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	int siz = (int)size;

	for (; i < siz; i++)
		action(array[i]);
}
