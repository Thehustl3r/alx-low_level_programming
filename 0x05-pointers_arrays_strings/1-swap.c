#include "main.h"
/**
 * swap_int - the function that swap two numbers
 * @a: pointer a
 * @b: pointer b
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int *tmp;

	tmp = &a;
	a = &b;
	b = &tmp;
}
