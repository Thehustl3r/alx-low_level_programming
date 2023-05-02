#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - the function that prints number of node in the list
 * @h: pointer to the heard
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
