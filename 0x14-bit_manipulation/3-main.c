#include <stdio.h>
#include "main.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	unsigned long int nb = 2048;

	n = set_bit(&nb, 1);
	printf("nb:%lu\nret:%d\n", nb, n);
	return (0);
}
