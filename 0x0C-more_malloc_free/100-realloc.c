#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - the function to allocate new memorry address
 * @ptr: address to old memory
 * @old_size: number of byte to new integer
 * @new_size: number of new byte
 *
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;

	if (new_size == 0 && old_size == 0)
		return (0);

	new = malloc(new_size);
	if (new == NULL)
		return (0);
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
		new_size = old_size;

	return (new);
}
