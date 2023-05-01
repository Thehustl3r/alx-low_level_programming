#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - the function tofree the space
 * @head: the pointer to the head
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
