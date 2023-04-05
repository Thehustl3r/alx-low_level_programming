#include "main.h"
/**
 * _puts_recursion - Function that prints the string with new line
 * @s: charater s
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_puts_recursion(s++);
	_putchar(*s);
}
