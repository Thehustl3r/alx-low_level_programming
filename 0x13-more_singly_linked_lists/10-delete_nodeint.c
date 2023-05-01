#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - the function that return the index at index
 * @head: the pointer to head
 * @index: the index
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int test = 0;
	listint_t *tmp = *head;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (test == index)
		{
			tmp = (*head)->next;
			free(*head);
			head = tmp;
			return (1);
		}
		head = head->next;
		test++;
	}
	return (-1);

}
