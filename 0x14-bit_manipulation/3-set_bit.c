#include "main.h"
#include <stdio.h>

long int decimal_to_binary(unsigned long int *n, unsigned int index);
unsigned long int _pow(unsigned int a, unsigned int b);

/**
 * set_bit - set bit to one function
 * @n: address of a number
 * @index: address of to be chanfed
 * Return: changed value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	long int result;

	if (n == NULL)
		return (-1);
	result = decimal_to_binary(n, index);
	if (result >= 0)
	{
		*n = result;
	return (1);
	}
	else
		return (-1);
}

/**
 * decimal_to_binary - function that returns the bit at index
 * @n: the value
 * @index: the number to be checked
 * Return: bit if its found otherwise -1
 */
long int decimal_to_binary(unsigned long int *n, unsigned int index)
{
	unsigned long int ne = *n, *result, dec = 0;
	unsigned int idx = 0, i = 0, rem, test, flag = 0;

	if (ne == 0)
		idx = 1;
	while (ne > 0)
	{
		rem = ne % 2;
		ne = ne / 2;
		idx++;
	}
	idx--;
	if (idx < index)
		idx = index;
	ne = *n;
	test = idx;
	result = malloc(sizeof(unsigned long int) * (idx + 1));
	if (result == NULL)
		return (-1);
	idx++;
	while (idx--)
		result[idx] = 0;
	idx = test;
	while (ne > 0)
	{
		rem = ne % 2;
		ne = ne / 2;
		result[idx--] = rem;
	}
	test++;
	while (test--)
	{
		if (i == index)
		{
			result[test] = 1;
			flag = 1;
		}

		if (result[test] == 1)
			dec = dec + _pow(2, i);
		i++;
	}
	if (flag)
		return (dec);
	else
		return (-1);
}
/**
 * _pow -  Function that returns power
 * @a: An unsigend int a
 * @b: An unsigned int b
 * Return: power
 */
unsigned long int _pow(unsigned int a, unsigned int b)
{
	long int result = 1;

	while (b--)
		result *= a;
	return (result);
}
