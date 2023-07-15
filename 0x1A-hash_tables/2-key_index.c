#include "hash_tables.h"

/**
 * key_index -  the function that creates the new hash table
 * @key: the key to the value
 * @size: the size of the table
 * Return: new table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index = hash_djb2(key);

	return (index % size);
}
