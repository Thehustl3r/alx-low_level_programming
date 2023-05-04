#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow -  Function that returns power
 * @a: An unsigend int a
 * @b: An unsigned int b
 * Return: power
 */
unsigned long int _pow(unsigned long int a, unsigned long int b);

/**
 * print_binary - the function that convert binary to int
 * @n: pointer to the string
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0, power = 1;

	if (n == 0)
		_putchar('0');
	if (n == 1)
		_putchar('1');
	while (n > 0)
	{
		printf("%lu\n",n);
		i = 0;
		while (power < n)
		{
			power = pow(2,i);
			i++;
		}
		printf("%lu\n",n);
		i--;
		power = pow(2,i);
/*		_putchar('1');
		while (comp > i)
		{
			_putchar('0');
			comp--;
		}*/
		n = n - power;
		printf("%lu\n",n);
	}
}
/**
 * _pow -  Function that returns power
 * @a: An unsigend int a
 * @b: An unsigned int b
 * Return: power
 */
unsigned long int _pow(unsigned long int a, unsigned long int b)
{
	unsigned long int result = 1;

	while (b--)
		result *= a;
	return (result);
}
