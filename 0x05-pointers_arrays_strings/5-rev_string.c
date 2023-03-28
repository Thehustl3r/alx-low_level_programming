#include "main.h"
/**
 * rev_string - this is the tool that well reverse a string
 * @s: char c
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int mid;
	char tmp;

	while (*(s + len) != '\0')
		len++;
	mid = len / 2;
	len--;

	while (len >= mid)
	{
		tmp = *(str + len);
		*(str + len) = *(str + i);

		i++;
		len--;
	}
	_putchar('\n');
}
