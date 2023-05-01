#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - the function that return the index at index
 * @head: the pointer to head
 * @index: the targeted index
 * Return: 1 if it exist else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int test = 0;
	listint_t *prev = NULL;
	listint_t *curr = *head;

	if (*head != NULL)
	{
		if (index == test)
		{
			(*head) = (*head)->next;
			free(curr);
			return (1);
		}
		else
		{
			while (curr != NULL && index != test)
			{
				prev = curr;
				curr = curr->next;
				test++;
			}
			if (curr != NULL)
			{
				prev->next = curr->next;
				free(curr);
				return (1);
			}
		}
	}
	return (-1);

}
