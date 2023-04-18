#include <stdlib.h>
#include "main.h"
/**
 * init_dog - the function that initialize a struct
 * d: thea ddress of the structure
 * name: the address of name
 * age: number of age
 * owner: the name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (NULL);
}
