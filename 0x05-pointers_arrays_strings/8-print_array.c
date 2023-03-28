#include "main.h"
void print(int n);
/**
 * print_array - Function to print array
 * @a: Pointer a
 * @n: integer n
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while ( i < n)
	{
		print(*(a + i));

		if ( i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

/**
 * print - print number
 * @n: Integer a
 *
 * Return: Nothing
 */
void print(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n / 10)
		print(n /10);
	_putchar(n + '0');
}
