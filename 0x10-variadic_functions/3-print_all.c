#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
typedef struct test
{
	char *test;
	void (*f)(va_list pi);
} new_format;
void p_char(va_list pi)
{
	printf("%c", (char)va_arg(pi, int));
}
void p_int(va_list pi)
{
	printf("%d", va_arg(pi, int));
}
void p_float(va_list pi)
{
	printf("%f", (float)va_arg(pi, double));
}
void p_string(va_list pi)
{
	printf("%s", va_arg(pi, char*));
}
/**
 * print_all - the function to print numbers
 * @format: the number of argumentsi
 * @...: other arguments
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list  pi;
	int len = 0;
	new_format tests[] =
	{
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string}
	};

	va_start(pi, format);
	while (format[len])
	{
		while (i < 4)
		{
			if (tests[i].test[0] == format[len])
			{
				tests[i].f(pi);
				printf(", ");
			}
			i++;
		}
		len++;
	}

	va_end(pi);
	printf("\n");
}
