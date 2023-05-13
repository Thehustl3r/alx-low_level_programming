#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry program
 * @argc: the number of argument
 * @argv: args
 * Return: Always 0
 */
int main (int argc, char **argv)
{
	char *input = (char *)argv[1];
	char comd[100];
	int flag;

	if (argc != 2)
	{
		perror("Usage: elf_header elf_filename\n");
		return (0);
	}

	comd = "readelf -h " + *input + "| awk 'NR == 1 || NR == 2 || NR || NR == 3 || NR == 4 || NR == 5 || NR == 6 || NR == 7 || NR == 8 || NR == 10'";
	flag = system(comd);
	if (flag == -1)
		return (-1);
	return (0);
}
