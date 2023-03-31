#include "main.h"
/**
 * *infinite_add -  Function that add two large number
 * @n1: a character n1
 * @n2: a character n2
 * @r: a character r
 * @size_r: an integer size_r
 *
 * Return: addition
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int *sum;
	int len = 0;

	sum = n1 + n2;

	while (sum[len] != '\0')
		len++;
	return ((len >= r)? sum : 0 );
}
