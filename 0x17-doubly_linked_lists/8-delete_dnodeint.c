#include "lists.h"
/**
 * delete_dnodeint_at_index - the function that delete a node at index
 * @head: pointer to the header
 * @index: the number of index
 * Return: 1 on success otherwise 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int n = 0;

	if (*head == NULL)
		return (0);

	tmp = *head;
	while (tmp)
	{
		if (n == index)
		{
			if (tmp == *head)
				*head = tmp->next;

			if (tmp->next)
				tmp->next->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		n++;
		tmp = tmp->next;
	}
	return (-1);
}
