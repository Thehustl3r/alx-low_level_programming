#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet 10x
 */
void print_alphabet_x10(void)
{
	char i;
	int a = 0;

	while (a < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		a++;
	}
}
