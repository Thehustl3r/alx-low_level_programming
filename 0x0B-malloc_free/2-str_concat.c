#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - Function to concatenate to string
 * @s1: address of a string one
 * @s2: address of a second string
 *
 * Return: a pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, total, i;
	char *new;

	len1 = 0;
	len2 = 0;
	i = 0;

	while (s1[len1] != '\0')
		len1++;
	len1--;

	while (s2[len2] != '\0')
		len2++;
	total = len1 + len2++;

	new = (char *)malloc(total);

	for (; i < total; i++)
	{
		if (i <= len1)
			new[i] = s1[i];
		else
			new[i] = s2[i - len1 - 1];
	}
	return (new);
}
