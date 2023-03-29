#include "main.h"
/**
 * *_strcpy - Function to copy string to buffer
 * @dest: character dest
 * @src: character src
 * Return: copy
 */

char *_strcpy(char *dest, char *src)
{
	int len2, len1, i;

	len2 = 0;
	len1 = 0;
	i = 0;

	while (*(dest + len1) != '\0')
		len1++;

	while (*(src + len2) != '\0')
		len2++;

	while (i < len2)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (len1 > len2)
	{
		while (len2 < len1)
		{
			dest[len2] = '\0';
			len2++;
		}
	}
	return (dest);
}
