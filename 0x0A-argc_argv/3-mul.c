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
	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
		printf("%d\n", argv[1] * argv[2]);
	return (0);
}
