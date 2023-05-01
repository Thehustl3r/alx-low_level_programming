#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that delete the first node
 * @head: the pointer to the head
 * Return: the number of deoleteded node
 */
int pop_listint(listint_t **head)
{
	int i = 0;

	if (head == NULL)
		return (0);

	*head = (*head)->next;

	return (i);
}
