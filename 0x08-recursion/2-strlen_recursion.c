#include "main.h"
/**
 * _strlen_recursion - the function that orints the klength
 * @s: a character s
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	_strlen_recursion(s++);
	return (i + 1);
}
