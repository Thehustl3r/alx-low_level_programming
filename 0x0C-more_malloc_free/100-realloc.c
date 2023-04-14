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

	if (new_size == 0 && ptr != NULL)
		return (NULL);

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
		new[i] = ptr[i];

	free(ptr);
	return (new);
}
