#include "main.h"
/**
 * decimal_to_binary - function that returns the bit at index
 * @n: the value
 * Return: bit if its found otherwise -1
 */
unsigned long int decimal_to_binary(unsigned long int *n, unsigned int index);

/**
 * _pow -  Function that returns power
 * @a: An unsigend int a
 * @b: An unsigned int b
 * Return: power
 */
unsigned long int _pow(unsigned int a, unsigned int b);

/**
 * binary_to_decimal - the function that convert binary to int
 * @b: pointer to the string
 * Return: an Decimal number otherwise 0
 */
unsigned long int binary_to_decimal(unsigned long int *b);

/**
 * set_bit - set bit to one function
 * @n: address of a number
 * @index: address of to be chanfed
 * Return: changed value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int result = 0, binary = 0, ne = *n;

	if (n == NULL)
		return (-1);
	binary = decimal_to_binary(&ne, index);
	result = binary_to_decimal(&binary);
	return (result);
}

/**
 * binary_to_decimal - the function that convert binary to int
 * @b: pointer to the string
 * Return: an Decimal number otherwise 0
 */
unsigned long int binary_to_decimal(unsigned long int *b)
{
	unsigned int result = 0;
	unsigned int len = 0, power = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	result = 0;
	while (len--)
	{
		power = len;
		if (*b == '0' || *b == '1')
		{
			if (*b == '1')
				result = result + _pow(2, power);
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (result);
}

/**
 * decimal_to_binary - function that returns the bit at index
 * @n: the value
 * Return: bit if its found otherwise -1
 */
unsigned long int decimal_to_binary(unsigned long int *n, unsigned int index)
{
	unsigned long int ne = *n;
	unsigned long int idx = 0, rem, test, result = 0, flag = 0, i = 0;

	while (ne > 0)
	{
		rem = ne % 2;
		ne = ne / 2;
		idx++;
	}
	ne = *n;
	test = idx;
	while (ne > 0)
	{
		rem = ne % 2;
		if (index == (test - idx))
		{
			rem = 0;
			flag = 1;
		}
		ne = ne / 2;
		if (i > 0)
			result = result + _pow(10,i);
		result = result + rem;
		i++;
		idx--;
	}
	if (flag)
		return (result);
	else
		return (0);
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
