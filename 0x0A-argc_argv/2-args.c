#include <stdio.h>
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
	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
			printf("%s\n", argv[count]);
	}
	return (0);
}
