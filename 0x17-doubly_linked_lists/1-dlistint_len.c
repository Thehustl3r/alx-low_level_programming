#include "lists.h"
/**
 * dlistint_len - the function that print the list of double list
 * @h: pointer to the header
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
