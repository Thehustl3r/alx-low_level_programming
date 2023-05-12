#include <stdio.h>

/**
 * main - Entry program
 * @argc: the number of argument
 * @argv: args
 * Return: Always 0
 */
int main (int argc, char **argv)
{
	if (argc != 2)
	{
		perror("Usage: elf_header elf_filename\n");
		return (0);
	}
	printf("%s\n", argv[1]);
	return (0);
}
