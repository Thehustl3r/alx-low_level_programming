#include "main.h"
#include <stdio.h>

/**
 * get_endianness - the functions finds endiansian
 *
 * Return: 0 Always 1
 */
int get_endianness(void)
{
	unsigned int n = 2;

	char *ch = (char *) & n;
	if (*ch)
		return (1);
	return (0);
}
