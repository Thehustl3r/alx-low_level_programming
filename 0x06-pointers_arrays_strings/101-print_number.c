#include "main.h"
/**
 * Print_number - function to print a nunmber
 * @n: an integer n
 *
 * Return: a number
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
