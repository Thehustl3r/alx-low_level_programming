#include "lists.h"

/**
 * add_dnodeint - the function that adds the ellement to the start of the node
 * @head: the list
 * @n: number to be insterted
 * Return: the new struct
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	if (head == NULL)
		return (NULL);
	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	new_head->prev = NULL;
	
	(*head) = new_head;
	return(*head);
}
