#include "main.h"
#include <stdio.h>
/**
 * _pow -  Function that returns power
 * @a: An unsigend int a
 * @b: An unsigned int b
 * Return: power
 */
long int _pow(int a, int b);

/**
 * print_binary - the function that convert binary to int
 * @n: pointer to the string
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	long int ne = (long int)n;
	long int i = 0, power = 1, comp = 0;
	unsigned long int test = 1UL << (sizeof(unsigned long int) * 8 - 1);

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

	if (ne == 0)
	{
		_putchar('0');
		return;
	}
	if (ne == 1)
	{
		_putchar('1');
		return;
	}

	while (ne > 1)
	{
		comp = i;
		i = 0;
		power = 1;
		while (power <= ne)
		{
			power = _pow(2, i);
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
		ne = ne - power;
		if (ne == 1 && i == 0)
			_putchar('1');
		if (ne == 0 && i != 0)
		{
			while (i--)
				_putchar('0');
		}
		if (ne == 1 && i > 0)
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
long int _pow(int a, int b)
{
	long int result = 1;

	while (b--)
		result *= a;
	return (result);
}
