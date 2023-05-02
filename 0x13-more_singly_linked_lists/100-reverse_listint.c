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

	if (*head != NULL)
	{
		tmp = NULL;
		while (*head != NULL)
		{
			new_head = (*head)->next;
			(*head)->next = tmp;
			tmp = *head;
			*head = new_head;
		}
		*head = tmp;
		return (*head);
	}
	return (NULL);
}
