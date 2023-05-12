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
	int fd, fd1, fdr;
	char buffer[1024];

	if (argc != 3)
	{
		perror("Usage: cp file_from file_to");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((fdr = read(fd, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd1, buffer, fdr) == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	chmod(argv[2],0664);
	return (1);
}
