#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - the function to print numbers
 * @separator: the address of separator
 * @n: the number of argumentsi
 * @...: other arguments
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list  pi;
	char *string;

	va_start(pi, n);
	for (; i < n; i++)
	{
		string = va_arg(pi, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(pi);
	printf("\n");
}
