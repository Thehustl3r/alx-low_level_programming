#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - the function that reverse the linked list
 * @head: the pointer to the head
 * Return: reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_head, *tmp;

	if (*head)
	{
		tmp = NULL;
		new_head = *head;
		while (*head)
		{
			*head = (*head)->next;
			new_head->n = (*head)->n;
			new_head->next = tmp;

			if (!(*head)->next)
			{
				tmp = new_head;
			}	
		}
		return (new_head);
	}
	return (NULL);
}
