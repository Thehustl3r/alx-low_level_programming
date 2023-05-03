#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe: print a list in safe way
 * @head: the pointer to the header
 *
 * Return: the number of element in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp1 = head, *tmp2 = head;
	size_t i = 0;

	if (head == NULL)
	{
		exit (98);
	}
	while (head && tmp1 && tmp2 && tmp2->next)
	{
		tmp1 = tmp1->next;
		tmp2 = tmp2->next->next;

		if (tmp1 == tmp2)
		{
			printf("-> [%p] %d\n",(void *)head, head->n);
			exit (98);
		}
		printf("[%p] %d\n",(void *)head, head->n);
		head = head->next;
		i++;
	}
	head = NULL;
	return (i);
}
