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

	if (s1 == NULL)
		s1 = "";

	while (s1[len1] != '\0')
		len1++;

	if (s2 == NULL)
		s2 = "";

	while (s1[len2] != '\0')
		len2++;

	if (n < len2)
		total = len1 + n;
	else
		total = len1 + len2;
	total++;
	new = malloc(total);

	if (new == NULL)
		return (0);
	total--;
	for (; i < total; i++)
	{
		if (i < len1)
			new[i] = s1[i];
		else
			new[i] = s2[i - len1];
	}
	new[i] = '\0';
	return (new);
}
