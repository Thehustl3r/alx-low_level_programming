#include "main.h"
/**
 * _print_rev_recursion - print reverse of the string
 * @s: point to the address of the string
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s++);
}
