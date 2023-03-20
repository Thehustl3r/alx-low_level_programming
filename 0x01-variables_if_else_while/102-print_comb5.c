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
	int num[100];
	int n = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num[n] = concatenate(i, j);
			n++;
		}
	}
	for (i = 0; i < 99; i++)
	{
		if (num[i] < 10)
			putchar('0');
		pint(num[i]);

		if (i != 98)
		{
		putchar(',');
		putchar(' ');
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
