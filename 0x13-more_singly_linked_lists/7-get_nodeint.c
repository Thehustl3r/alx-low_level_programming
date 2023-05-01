#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - the function that return the index at index
 * @head: the pointer to head
 * @index: the index
 * Return: new node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int test = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (test == index)
			return (head);
		head = head->next;
		test++;
	}
	return (NULL);

}
