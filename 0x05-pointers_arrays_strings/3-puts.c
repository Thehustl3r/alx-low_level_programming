#include "main.h"
/**
 * _puts - function to print string
 * @c: char c
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
