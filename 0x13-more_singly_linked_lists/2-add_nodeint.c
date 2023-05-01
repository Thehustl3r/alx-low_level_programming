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
	listint_t *new_node;

	new_node = malloc(sizeof(add_nodeint));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	head = &new_node;

	return (new_node);
}
