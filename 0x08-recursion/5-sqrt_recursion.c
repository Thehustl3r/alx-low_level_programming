#include "main.h"
/**
 * _sqrt_recursion - find the square root of anumber
 * @n: an integer n
 *
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (n / n);
}
