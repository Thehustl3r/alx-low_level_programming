#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - The function that allocate memory using malloc
 * @b: unsigned integer b
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *str;
	
	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}
