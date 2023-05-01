#include "lists.h"
#include <stdlib.h>

/**
 * fre_listint2 - the function that frees the memory
 * @head: pointer to the head
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	free(*head);
}
