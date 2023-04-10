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
	if (argc > 0)
		printf("%s\n",argv[0]);
	return (0);
}
