#include <stdlib.h>
/**
 * struct dog - the struct contains detail of dog
 * @name: the adrress of name
 * @age: dog's age
 * @owner: dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}doggy;
/**
 * struct new_dog - the struct contains detail of dog
 * @name: the adrress of name
 * @age: dog's age
 * @owner: dog's owner
 */
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
