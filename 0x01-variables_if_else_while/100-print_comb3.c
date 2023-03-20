#include <stdio.h>

/**
 * main - Entry function
 * Return: always returb 0 (success)
 */
int main(void)
{
	int i;
	for (i = '1'; i <= 89; i++)
	{
		if (i < 10)
			putchar('0' + i + ',' + ' ');
		else if (i != 89)
			putchar(i + ',' + ' ');
	}
	putchar('\n');
	return (0);
}
