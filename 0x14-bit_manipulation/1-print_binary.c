#include "main.h"

/**
 * print_binary -  the function used to print binary
 * @n: the number to be printed
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (!n)
		return;
	_putchar(n%2);
	print_binary(n/2);
}
