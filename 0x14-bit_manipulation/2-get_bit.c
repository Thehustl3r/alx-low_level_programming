#include "main.h"

/**
 * get_bit - function that returns the bit at index
 * @n: the value
 * @index: Index
 * Return: bit if its found otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	long int ne = (long int)n;
	unsigned long int idx = 0, rem, test;

	while (ne > 0)
	{
		rem = ne % 2;
		ne = ne / 2;
		idx++;
	}
	ne = (long int)n;
	test = idx;
	while (ne > 0)
	{
		rem = ne % 2;
		if (index == (test - idx))
			return (rem);
		ne = ne / 2;
		idx--;
	}
	return (-1);
}
