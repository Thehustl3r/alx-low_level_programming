#include "main.h"
/**
 * *_strncat - function that concatenate the string by available length
 * @dest: a charcter dest
 * @src: a character src
 * @n: an integer n
 *
 * Return: concantenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, len1, i, total;

	len = 0;
	len1 = 0;
	i = 0;

	while (*(dest + len) != '\0')
		len++;
	while (*(src + len1) != '\0')
		len1++;
	(len1 >= n) ? total = len + n : total = len + len1;
	
	while (len < total)
	{
		*(dest + len) = *(src + i);
		len++;
		i++;
	}
	return (dest);
}
