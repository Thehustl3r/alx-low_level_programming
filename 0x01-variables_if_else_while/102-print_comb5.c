#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* pint - function to print intefer */
void pint(int num);
/* concatenate - function to concatenate integer */
int concatenate(int x, int y);

/**
 * main - Entry function
 * Return: always returb 0 (success)
 */
int main(void)
{
	int i, j;
	int num[10];
	int num2[100];

	for (i = 0; i < 10; i++)
	{
		num[i] = i;
		for (j = 1; j < 100; j++)
		{
			num2[j - 1] = j;
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 99; j++)
		{
			if (i < 10)
				putchar('0');

			pint(num[i]);
			putchar(' ');
			if (num2[j] < 10)
				putchar('0');

			pint(num2[j]);
			if (!(i == 9 && j == 98))
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
/**
 * concatenate - function to concatenate integer
 * Return: - always return concatenation
 * @x: - An integer a
 * @y: - An integer a
 */
int concatenate(int x, int y)
{
	int pow = 10;

	while (y > 10)
		pow *= 10;
	return (x * pow + y);
}
