#include "main.h"
/**
 * _isupper: - programm tofind uppercase
 * @c: An integer c
 * Return: 0 if is uppercase
 */
int _isupper(int c)
{
	char i;
	int flag = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			flag = 1;
			break;
		}
	}

	return (flag);
}
