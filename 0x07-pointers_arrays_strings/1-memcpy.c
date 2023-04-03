#include "main.h"
/**
 * *_memcpy - The function to fill the empty space
 * @dest: a pointer dest
 * @src: a pointer src
 * @n: an integer n
 *
 * Return: array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		dest[n] = src[n];
	}
	return (dest);
}
