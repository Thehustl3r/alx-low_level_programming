#include "lists.h"

/**
 * free_dlistint - function that frees the list
 * @head: the list
 * Return: Nothing 
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head->next)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
