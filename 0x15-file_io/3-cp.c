#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int _close(int fd);
/**
 * main - Entry program
 * @argc: number of agruments
 * @argv: arguments value
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd, fd1, fdr, fd1w;
	char buffer[1024];

	if (argc != 3)
	{
		perror("Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		_close(fd);
		exit(99);
	}

	while ((fdr = read(fd, buffer, sizeof(buffer))) > 0)
	{
		fd1w = write(fd1, buffer, fdr);
		if (fd1w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			_close(fd);
			_close(fd1);
			exit(99);
		}
	}
	if (fdr == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		_close(fd);
		_close(fd1);
		exit(98);
	}
	fd1w = _close(fd1);
	if (fd1w == -1)
	{
		_close(fd);
		exit(100);
	}
	fd1w = _close(fd);
	if (fd1w == -1)
		exit(100);

	chmod(fd1, 0664);
	return (0);
}

/**
 * _close - function that close the file
 * @fd: file descriptor
 * Return: positiver integer when there is no error
 */
int _close(int fd)
{
	int err;

	err = close(fd);
	if (err == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (err);
}
