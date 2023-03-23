#include "main.h"
/**
 * main: - entry program
 * _isupper: - programm tofind uppercase
 * Return: - always 0 (success)
 * @c: - An integer c
 */
int _isupper(int c)
{
	char i;
	int flag = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			flag = 1;
	}

	return (flag);
}
