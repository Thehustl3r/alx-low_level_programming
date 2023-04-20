#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all arguments
 * @n: an integer a n
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (; i < n; i++)
		sum += va_arg(ap, const unsigned int);
	va_end(ap);
	return (sum);
}
