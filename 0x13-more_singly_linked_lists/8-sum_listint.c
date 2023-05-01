#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - the function that return the sum of al things in the array
 * @head: pointer to the header
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
