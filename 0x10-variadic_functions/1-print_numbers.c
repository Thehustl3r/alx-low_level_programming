#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - the function to print numbers
 * @separator: the address of separator
 * @n: the number of arguments
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list  pi;

	va_start(pi, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(pi, unsigned int));
		if (separator == NULL && i != (n - 1))
			printf(" ");
		if (separator != NULL && i != (n - 1))
			printf("%c ", separator[0]);
	}
	va_end(pi);
	printf("\n");
}
