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
	hash_node_t *new_node = NULL, *tmp_node = NULL;
	char *key_copy = NULL, *value_copy = NULL;

	if (key == NULL || ht == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	key_copy = strdup(key);
	value_copy = strdup(value);

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;
	if ((ht->array)[index])
	{
		tmp_node = (ht->array)[index];
		while (tmp_node)
		{
			if (strcmp(tmp_node->key, key_copy) == 0)
			{
				free((ht->array)[index]->value);
				(ht->array)[index]->value = value_copy;
				free(key_copy);
				free(new_node);
				return (1);
			}
			tmp_node = tmp_node->next;
		}
		tmp_node = (ht->array)[index];
		new_node->next = tmp_node;
		(ht->array)[index] = new_node;
	}
	else
		(ht->array)[index] = new_node;
	return (1);
}
