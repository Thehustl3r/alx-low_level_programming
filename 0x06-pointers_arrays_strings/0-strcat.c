#include "main.h"
/**
 * *_strcat - the Function to concatenate
 * @dest: character dest
 * @src: character src
 *
 * Return: concatenation
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, total, i;

	len1 = 0;
	len2 = 0;
	i = 0;

	while (*(dest + len1) != '\0')
		len1++;
	while (*(src + len2) != '\0')
		len2++;
	total = len1 + len2;

	while (len1 < total)
	{
		*(dest + len1) = *(src + i);
		len1++;
		i++;
	}
	return (dest);
}
