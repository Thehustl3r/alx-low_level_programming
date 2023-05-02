#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe: print a list in safe way
 * @head: the pointer to the header
 *
 * Return: the number of element in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	if (head)
	{
		while (head)
		{
			printf("[%p] %d", head, head->n);
			head = head->next;
			i++;
		}
		return (i);
	}
	return (NULL);
}
