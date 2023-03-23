#include "main.h"

/**
 * main: - entry program
 * _isdigit: - prgram to verify if is int
 * @c: - An integer c
 */

int _isdigit(int c)
{
	int i;
	int flag = 0;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
			flag = 1;
	}
	_putchar('\n');

	return (flag);
}
