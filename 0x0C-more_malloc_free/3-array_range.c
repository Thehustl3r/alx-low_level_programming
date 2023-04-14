#include <stdlib.h>
#include "main.h"
/**
 * simple_print_buffer - the function that store number in array
 * @buffer: the integer
 * @size: the integer size
 *
 * Return: Nothinig
 */

void simple_print_buffer(int *buffer, unsigned int size)
{
	int *arr;
	unsigned int min = (unsigned int)*buffer;

	if (*buffer < size)
		return (0);
	arr = malloc(sizeof(unsigned int) * (size - min));
	if (arr == NULL)
		return (0);
	for (; min <= size; min++}
		*arr = min, arr++;
	return (arr);
}
