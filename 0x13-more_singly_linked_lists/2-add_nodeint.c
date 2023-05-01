#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - the function to add a node
 * @head: pointer to the head
 * @n: value of a node
 * Return: a node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = *head;

	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}
