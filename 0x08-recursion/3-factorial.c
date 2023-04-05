#include "main.h"
/**
 * factorial - the function that prints the factorial
 * @n: an integer n
 *
 * Return: factorial
 */

int factorial(int n)
{
	if ( n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
