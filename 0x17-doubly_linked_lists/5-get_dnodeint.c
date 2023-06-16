#include "lists.h"
/**
 * get_dnodeint_at_index - the function that print the list of double list
 * @head: pointer to the header
 * @index: the number of index
 * Return: number of nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		if (n == index)
			return (head);
		n++;
		head = head->next;
	}
	return (NULL);
}
