#include <stdlib.h>
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}doggy;

struct dog *new_dog(char *name, float age, char *owner)
{
	struct dog *dogi;

	dogi = malloc(sizeof(struct dog));
	
	if (dogi == NULL)
		return (NULL);
	dogi->name = name;
	dogi->age = age;
	dogi->owner = owner;

	return (dogi);
}
