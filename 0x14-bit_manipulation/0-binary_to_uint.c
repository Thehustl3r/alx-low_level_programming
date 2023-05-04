#include "main.h"
#include <stdio.h>

/**
 * _pow -  Function that returns power
 * @a: An unsigend int a
 * @b: An unsigned int b
 * Return: power
 */
unsigned int _pow(unsigned int a, unsigned int b);

/**
 * binary_to_uint - the function that convert binary to int
 * @b: pointer to the string
 * Return: an Decimal number otherwise 0
 */
unsigned int binary_to_uint(const char *b)
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
unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int result = 1;
	while (b--)
		result *= a;
	return (result);
}
