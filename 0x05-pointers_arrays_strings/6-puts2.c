#include "main.h"
/**
 * puts2 - print string followed by new line
 * @str: char str
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		_putchar('\n');
		len += 2;
	}
}
