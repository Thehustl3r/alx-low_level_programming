#include "main.h"
/**
 * _strlen_recursion - the function that orints the klength
 * @s: a character s
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	char *ptr1;
	char *ptr2;

	ptr1 = s;
	ptr2 = (char *)(&s + 1) - 1;

	return (ptr2 - ptr1);
}
