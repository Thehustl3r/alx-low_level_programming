#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry function to program
 * @argc: number of agruments
 * @argv: number of the agrument
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int count;
	if (argc < 2)
		printf("%s\n", "0");
	else
	{
		for (count = 0; count < argc; count++)
		{
			if (!isdigit(argv[count]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
	}
	return (0);
}
