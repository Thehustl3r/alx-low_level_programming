#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - the function to concatenate two string
 * @s1: address of first string
 * @s2: address of second string
 * @n: integer
 *
 * Return: concatenate string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i = 0;
	unsigned int total;

	while (s1[len1] != '\0')
		len1++;
	while (s1[len2] != '\0')
		len2++;
	if (n < len2)
		total = len1 + n;
	else
		total = len1 + len2;
	new = malloc(total);

	for (; i < total; i++)
	{
		if (i < len1)
			new[i] = s1[i];
		else
			new[i] = s2[i - len1 - 1];
	}
	return (new);
}
