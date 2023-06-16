#include "lists.h"
/**
 * insert_dnodeint_at_index - the function thatinsert the node
 * @h: pointer to the header
 * @idx: the number of index
 * @n: the integer n
 * Return: number of new list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int ni = 0, flag = 1;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL && idx == 0)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	tmp = *h;
	while (tmp->next)
	{
		if (ni == idx)
		{
			flag = 1;
			break;
		}
		ni++;
		tmp = tmp->next;
	}
	if (flag)
	{
		new_node->next = tmp;
		new_node->prev = tmp->prev;
		if (tmp->prev != NULL)
			tmp->prev->next = new_node;
		return (new_node);
	}
	return (NULL);
}
