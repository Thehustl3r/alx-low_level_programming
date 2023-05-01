#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - the function tofree the space
 * @head: the pointer to the head
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	free(*head);
}
