#include "main.h"
/**
 * _puts_recursion - Function that prints the string with new line
 * @s: charater s
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s++);
	_putchar(*s);
}
