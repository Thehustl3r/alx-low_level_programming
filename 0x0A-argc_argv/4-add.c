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
	int sum = 0;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
                {
                        if (isdigit(argv[count]))
				sum = sum + atoi(argv[count]);
			else
                        {
                                printf("%s\n", "Error");
				break;
                        }
                }
		printf("%d\n", sum);
	}
	else
		printf("%s\n", "0");
	return (0);
}
