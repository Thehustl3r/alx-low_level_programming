#include "main.h"

/**
 * main: - entry program
 * _isdigit: - prgram to verify if is int
 * @c: - An integer c
 * Return: - 1 if is int
 */

int _isdigit(int c)
{
	int i;
	int flag = 0;

	for (i = 48; i <= 58; i++)
	{
		if (i == c)
		{
			flag = 1;
			break;
		}
	}

	return (flag);
}
