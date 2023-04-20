#include <stdio.h>
#include "variadic_functions.h"
/**
 * print-numbers - the function to print numbers
 * @separator: the address of separator
 * @n: the number of arguments
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list = pi;

	va_start(pi);
	for (; i < n; i++)
	{
		printf("%d%s", va_arg(pi, unsigned int), *separator);
	}
	va_end(pi);
}
