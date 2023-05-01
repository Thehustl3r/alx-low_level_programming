#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that delete the first node
 * @head: the pointer to the head
 * Return: the number of deoleteded node
 */
int pop_listint(listint_t **head)
{
	listint_t prev;
	int n;

	if (*head != NULL)
	{
		prev = *head;
		*head = (*head)->next;

		n = prev->n;
		free(prev);
		return (n);
	}
	return (0);
}
