#include "main.h"

/**
 * more_numbers - a function that prints the numbers, from 0 to 14.
 * followed by a new line.
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int count = 0;

	while (count < 10)
	{
		for(i = 0 ; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		_putchar('\n');

		count ++;
	}
}
