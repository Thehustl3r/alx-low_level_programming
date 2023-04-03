#include "main.h"
/**
 * *_memset - Function to fill up the missing integer
 * @s: an pointer s
 * @b: an pointer b 
 * @n: an integer n
 *
 * Return: alwaays char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int **ptr;

	ptr = &s;

	while (ptr[i] == '\0')
	{
		ptr[i] = b;
		i++;
		if (i >= n)
			break;
	}	
}
