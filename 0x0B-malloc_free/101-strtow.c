#include <stdlib.h>
#include "main.h"
/**
 * strtow - that split a string
 * @str: this is address of the string
 *
 * Return: splited world
 */

char **strtow(char *str)
{
	char **new;

	if (*str == '\0')
		return (0);
	*new = str;
	return (new);
}
