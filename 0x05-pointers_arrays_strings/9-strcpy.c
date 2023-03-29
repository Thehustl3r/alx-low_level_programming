#include "main.h"
/**
 * *_strcpy - Function to copy string to buffer
 * @dest: character dest
 * @src: character src
 * Return: copy
 */

char *_strcpy(char *dest, char *src)
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
		*(dest + (len1 - 1)) = *(src + i);
		len1++;
		i++;
	}
	return (dest);
}
