#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all arguments
 * @n: an integer a n
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ap;

	va_start(ap, n);
	for (sum += n; sum >= 0; sum = va_arg(ap, const unsigned int))
	{
	}
	va_end(ap);
	return (sum);
}
