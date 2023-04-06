#include "main.h"
/**
 * _strlen_recursion - the function that orints the klength
 * @s: a character s
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	char *ptr1 = &s;
	char *ptr2 = (char *)(&s + 1) - 1;

	return (ptr2 - ptr1);
}
