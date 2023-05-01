#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - the function that frees the memory
 * @head: pointer to the head
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
	free(head);
}
