#include "lists.h"

/**
 * listint_len - the function that returns number of nodes
 * @h: pointer to header
 * Return: numbero f size
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
