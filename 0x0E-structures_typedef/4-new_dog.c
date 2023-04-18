#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - copy of data of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new data
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
