#include <stdlib.h>
#include "main.h"
/**
 * _strdup - the fnction that copies string to other address
 * @str: the address of the string;
 *
 * Return: address of new string
 */

char *_strdup(char *str)
{
	char *new;
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;
	len++;
	if (len <= 0)
		return (0);
	new = (char *)malloc(len);

	if (len == 1)
	{
		new[0] = 32;
		return (new);
	}
	len--;
	for (; i < len; i++)
		new[i] = str[i];
	return (new);
}
