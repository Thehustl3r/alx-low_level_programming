#include "main.h"

/**
 * more_numbers - a function that prints the numbers, from 0 to 14.
 * followed by a new line.
 * Return: Always 0
 */
void more_numbers(void)
{
	int i = '0';
	int count = 0;

	while (count < 10)
	{
		for (; i <= '14'; i++)
			_putchar(i);
		count ++;
	}
	_putchar('\n');
}
