#include "main.h"
/**
 * *_strcpy - Function to copy string to buffer
 * @dest: character dest
 * @src: character src
 * Return: copy
 */

char *_strcpy(char *dest, char *src)
{
	char *newdata;
	int len1, len2, total, i;

	len1 = 0;
	len2 = 0;
	i = 0;

	while (*(dest + len1))
		len1++;
	while (*(dest + len2))
		len2++;
	total = len1 + len2;

	while (i < total)
	{
		if (i < len1)
			*(newdata + i) = *(dest + i);
		else
			*(newdata + i) = *(src + (i - len1));
		i++;
	}
	return (newdata);
}
