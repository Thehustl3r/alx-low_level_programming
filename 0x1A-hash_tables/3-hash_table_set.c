#include "hash_tables.h"

/**
 * hash_table_set -  the function that adds key toadd element to the tble
 * @key: the of instance
 * @value: the value of the instance
 * @ht: the hash table
 * Return: 1 when succed otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new_node;
	char *key_copy, *value_copy;

	if (key == NULL || ht == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	key_copy = strdup(key);
	value_copy = strdup(value);
	if (!key_copy || (value && !value_copy))
	{
		free(new_node);
		free(key_copy);
		free(value_copy);
	}

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
