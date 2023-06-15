#include "lists.h"
/**
 * print_dlistint - the function that print the list of double list
 * @h: pointer to the header
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
