#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - Entry program
 * @argc: number of agruments
 * @argv: arguments value
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	FILE *fp, *fp1;
	char ch[1024];

	if (argc != 3)
	{
		perror("Usage: cp file_from file_to");
		exit(97);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fp1 = fopen(argv[2], "w");
	if (fp1 == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (fgets(ch, sizeof(ch),fp) != NULL)
	{
		fputs(ch, fp1);
	}
	fclose(fp1);
	fclose(fp);
	chmod(argv[2],0664);
	return (1);
}
