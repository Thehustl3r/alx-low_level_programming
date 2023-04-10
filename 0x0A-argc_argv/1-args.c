#include <stdio.h>
/**
 * main - Entry function to program 
 * @argc: number of agrumentsi
 * @argv: number of the agrument
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	if (argc < 0)
		printf("%s", argv[0]);
	printf("%d\n",argc);
	return (0);
}
