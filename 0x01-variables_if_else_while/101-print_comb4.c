#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* pint - function to print intefer */
void pint(int num);
/* concatenate - function to concatenate integer */
int concatenate(int x, int y, int z);

/**
 * main - Entry function
 * Return: always returb 0 (success)
 */
int main(void)
{
	int i, j, k;
	int num[1000];
	int n = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = (i + 1); j <= 9; j++)
		{
			for (k = (j + 1); k <=9; k++)
			{
				num[n] = concatenate(i, j, k);
				n++;
			}
		}
	}
	for (i = 0; i < 120; i++)
	{
		if (num[i] < 100)
			putchar('0');
		pint(num[i]);

		if (i != 119)
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
 * @z: - An integer a
 */
int concatenate(int x, int y, int z)
{
	int pow = 10;
	int ze;
	int result;

	while (y > 10)
		pow *= 10;

	ze = x * pow + y;
	pow = 10;

	while (z > 10)
		pow *= 10;

	result = ze * pow + z;
	return (result);
}
