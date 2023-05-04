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
 * print_binary - the function that convert binary to int
 * @n: pointer to the string
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int comp = 0;
	unsigned long int i = 0, power = 1;

	while (n)
	{
		comp = i;
		i = 0;
		while (power < n)
		{
			power *= _pow(2,i);
			i++;
		}
		i--;
		_putchar('1');
		while (comp > i)
		{
			_putchar('0');
			comp--;
		}
		n = n - _pow(2,i);
	}
}
/**
 * _pow -  Function that returns power
 * @a: An unsigend int a
 * @b: An unsigned int b
 * Return: power
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int result = 1;

	while (b--)
		result *= a;
	return (result);
}
