#include <stdio.h>

/**
 * main - Entry function
 * return (0) - success
 */
int main(void)
{
	int i;
	for (i = 1; i <= 89; i++)
	{
		if (i < 10)
			putchar(i == 1 ? ('0' + i): (' ' + '0' + i));
		else
			putchar(' ' + i);
	}
	putchar('\n');
	return (0);
}
