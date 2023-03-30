#include "main.h"
/**
 * *_strncpy - function that copy the value at index
 * @dest: a character dest
 * @src: a character src
 * @n: an integer n
 *
 * Return: copy 
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len1, len2, total, i;

	len1 = 0;
	len2 = 0;
	i = 0;

	while (*(dest + len1) != '\0')
		len1++;
	while (*(src + len2) != '\0')
		len2++;
	if (len2 >= n)
		total = n;
	else
		total = len2
	while (i < total)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
