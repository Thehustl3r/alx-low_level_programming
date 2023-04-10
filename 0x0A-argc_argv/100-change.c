#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry function to program
 * @argc: number of agruments
 * @argv: number of the agrument
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int money = atoi(argv[1]);
	int cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	while (money)
	{
		if (money >= 25)
		{
			cents++;
			money -= 25;
			continue;
		}
		else if (money >= 10)
		{
			cents++;
			money -= 10;
			continue;
		}
		else if (money >= 5)
		{
			cents++;
			money -= 5;
			continue;
		}
		else if (money >= 2)
		{
			cents++;
			money -= 2;
			continue;
		}
		else
		{
			cents++;
			money--;
		}
	}
	printf("%d\n", cents);
	return (0);
}
