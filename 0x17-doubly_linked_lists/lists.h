#ifndef DOUBLE_H
#define DOUBLE_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct node - the structure that hold a double linked list
 * @n: the integer n
 * @next: the address of next pointer
 * @prev: the address to prev pointer
 */
typedef struct node
{
	int n;
	struct node *next;
	struct node *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
#endif
