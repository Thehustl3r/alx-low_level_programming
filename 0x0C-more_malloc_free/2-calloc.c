#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - The functuin that create malloc for string
 * @nmemb: the integer nmemb
 * @size: the integer size
 *
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (0);
	str = malloc(nmemb * size);

	for (; i < (nmemb * size); i++)
		str[i] = 0;

	return (str);
}
