#include "main.h"
/**
 * puts_half - print half of the string
 * @str: char c
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len = 0;
	int mid, lenn;

	while (*(str + len) != '\0')
		len++;
	mid = len / 2;
	len--;
	lenn = len;
	len = 0;

	while (len <= mid)
	{
		_putchar(*(str + len));
		len++;
	}
	if (((lenn + 1) % 2 != 0))
		_putchar(*(str + lenn));
	_putchar('\n');
}
