#include <stdlib.h>
#include "main.h"
/**
 * *create_array - The function that returns the number of byte of an array
 * @size: size of an arrray
 * @c: a character c
 *
 * Return: Null if size is zero otherwise pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size <= 0)
		return (0);

	arr = (char *)malloc(size);

	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	return (arr);
}
