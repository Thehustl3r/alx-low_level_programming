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
		return;
	putchar(*s);
	s++;
	_puts_recursion(s);	
}
