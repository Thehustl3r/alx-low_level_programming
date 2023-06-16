#include "lists.h"

/**
 * add_dnodeint_end - the function  adds the ellement to the start of the node
 * @head: the list
 * @n: number to be insterted
 * Return: the new struct
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_head, *tmp;

	if (head == NULL)
		return (NULL);
	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = NULL;

	if (*head == NULL)
	{
		new_head->prev = NULL;
		*head = new_head;
		return (new_head);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_head;
	new_head->prev = tmp;

	return (new_head);
}
