#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* pint - function to print intefer */
void pint(int num);

/**
 * main - Entry function
 * Return: always returb 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = (i + 1); j < 100; j++)
		{
			if (i < 10)
				putchar('0');

			pint(i);
			putchar(' ');
			if (j < 10)
				putchar('0');

			pint(j);
			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
/**
 * pint - function to print intefer
 * Return: - always return a long integer
 * @num: - An integer a
 */
void pint(int num)
{
	if (num / 10)
	pint(num / 10);
	putchar(num % 10 + '0');
}
