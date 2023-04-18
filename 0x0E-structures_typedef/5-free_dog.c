#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - the function that release the memory
 * @d: address of the structure
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
