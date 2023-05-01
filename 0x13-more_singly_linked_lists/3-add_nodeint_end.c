#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - the function to add a node
 * @head: pointer to the head
 * @n: value of a node
 * Return: a node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	(*head)->next = new_node;

	return (new_node);
}
