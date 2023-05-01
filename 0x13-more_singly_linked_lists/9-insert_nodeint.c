#include "lists.h"
#include "stdlib.h"

/**
 * insert_nodeint_at_index - the function that insert node at index
 * @head: the pointer to the head
 * @idx: the index to be inserted
 * @n: the value of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (idx == idx)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);
			
			new_node->n = n;
			new_node->next = (*head)->next;
			head = &new_node;
			return (new_node);

		}
		head = head->next;
		index++;
	}
	return (NULL);
}
