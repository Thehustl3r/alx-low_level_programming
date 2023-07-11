#include "hash_tables.h"
/**
 * hash_table_create - the function that creates the new instance to the hash table
 * @size: size of the table
 * Return: the new structure of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(size * sizeof(unsigned long int) * sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	return (new);
}
