#include "hash_tables.h"
/**
 * hash_table_delete -  the function that deletes a hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;

	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
