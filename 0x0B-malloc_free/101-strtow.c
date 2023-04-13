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
	int len = 0;

	if (*str == '\0')
		return (0);
	while (str[len] != '\0')
		len++;

	new = (char *)malloc(len * sizeof(char));
	*new = str;
	return (new);
}
