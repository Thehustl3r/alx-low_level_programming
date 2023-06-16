#include "lists.h"
/**
 * sum_dlistint - the function that print the list of double list
 * @head: pointer to the header
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	size_t n = 0;

	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
