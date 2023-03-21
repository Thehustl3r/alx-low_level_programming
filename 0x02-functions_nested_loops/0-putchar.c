#include "min.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char name[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
		_putchar(name[i]);
	_putchar('\n');
}
