#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - Entry program
 * @argc: number of agruments
 * @argv: arguments value
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fdo, fdr;
	char buffer[4096];

	if (argc != 3)
	{
		perror("Usage: cp file_from file_to");
		exit(97);
	}

	if (buffer == NULL)
		return (0);

	fdo = open(argv[1], O_RDONLY);
	if (fdo == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdr = read(fdo, buffer, sizeof(buffer));
	close(fdo);

	fdo = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fdo == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	write(fdo, buffer, fdr);
	close(fdo);
	return (1);
}
