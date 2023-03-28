#include "main.h"
/**
 * print_rev - print reverse
 * @s: char c
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	while (len >= 0)
	{
		_putchar(*(str + len));
		len--;
	}
	_putchar('\n');
}
