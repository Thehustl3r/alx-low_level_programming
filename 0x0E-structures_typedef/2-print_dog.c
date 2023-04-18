#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Function d
 * d: structure dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");

	if (d-> == NULL)
		d->name = "nil";
	printf("Name: %s", d->name);
	printf("Age: %d", d->age);
	printf("Owner: %s", d->owner);
		
}
