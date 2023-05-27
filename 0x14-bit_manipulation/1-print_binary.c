#include "main.h"
#include <stdio.h>
unsigned long int _pow(unsigned long int a, unsigned long int b);

/**
 * print_binary - the function that convert binary to int
 * @n: pointer to the string
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int  power = 1;
	unsigned long int test = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int i = 0, comp = 0;

	if (n == ULONG_MAX)
	{
		while (test)
		{
			if (n & test)
				_putchar('1');
			else 
				_putchar('0');
			test >>= 1;
		}
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (n > 1)
	{
		comp = i;
		i = 0;
		power = _pow(2,4);
		while (power <= n)
		{
			power = _pow(2, i) + 1;
			i++;
		}
		i = i - 2;
		power = _pow(2, i);
		while (comp > i + 1)
		{
			_putchar('0');
			comp--;
		}
		_putchar('1');
		if (n > power)
			n = n - power;
		else
			break;
		if (n == 1 && i == 0)
			_putchar('1');
		if (n == 0 && i != 0)
		{
			while (i--)
				_putchar('0');
		}
		if (n == 1 && i > 0)
		{
			while (i > 1)
			{
				_putchar('0');
				i--;
			}
			_putchar('1');
		}
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
