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
	int lenn;

	while (*(str + len) != '\0')
		len++;
	len--;
	lenn = len;
	len = 0;

	while (len <= lenn)
	{
		_putchar(*(str + len));
		len += 2;
	}
	_putchar('\n');
}
