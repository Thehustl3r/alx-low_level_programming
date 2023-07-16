#include "hash_tables.h"

/**
 * hash_table_print - function that prints the hash table
 * @ht: hash table
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	int first_pair = 1;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (; i < ht->size - 1; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (!first_pair)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			first_pair = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
