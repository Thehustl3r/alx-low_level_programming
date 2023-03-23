#include "main.h"

/**
 * main: - entry program
 * _isdigit: - prgram to verify if is int
 * @c: - An integer c
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	char i;
	int flag = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			flag = 1;
			break;
		}
	}

	return (flag);
}
