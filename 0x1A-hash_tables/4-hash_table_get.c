#include "hash_tables.h"

/**
 * hash_table_get - function to look for value in table
 * @ht: hash table
 * @key: key to search
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	unsigned int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
		return (NULL);
	value = (ht->array)[index]->value;
	return (value);
}
