#include "main.h"

/**
 * read_textfile - the function that reads the data in file
 * @filename: the name of the file to be read
 * @letters: number of letters to be printed
 * Return: print data in file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	int fd;
	ssize_t read_text, write_text;

	ch = malloc(letters);
	if (ch == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read_text = read(fd, ch, letters);
	if (read_text == -1)
		return (0);
	write_text = write(STDOUT_FILENO, ch, read_text);
	close(fd);
	return (write_text);
}
