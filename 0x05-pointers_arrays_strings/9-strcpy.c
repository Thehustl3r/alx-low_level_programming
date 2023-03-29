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

	while (i < len2)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
