#include <stdio.h>
#include <stddef.h>
#include "list.h"

/**
 * print_listint - the function that prints number of node in the list
 * @h: pointer to the heard
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
