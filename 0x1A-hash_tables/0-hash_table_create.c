#include "hash_tables.h"
/**
 * hash_table_create - the function that creates new instance to the hash tabl
 * @size: size of the table
 * Return: the new structure of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *hash_table;

	hash_table = malloc(size * sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}
