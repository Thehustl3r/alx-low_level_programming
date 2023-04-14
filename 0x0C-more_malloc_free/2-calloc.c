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
		return;
	str = malloc((nmemb * size) + 1);

	if (str == NULL)
		return;

	for(; i < (nmemb * size); i++)
		str[i] = 0;

	return (str);
}
