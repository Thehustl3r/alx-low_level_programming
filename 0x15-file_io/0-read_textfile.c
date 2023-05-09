#include "main.h"

/**
 * read_textfile - the function that reads the data in file
 * @filename: the name of the file to be read
 * @letters: number of letters to be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	int fd;
	ssize_t read_text;

	ch = malloc(letters);
	if (ch == NULL)
		return (0);

	fd = open(*filename, "O_RDONLY");
	if (fd == -1)
		return (0);
	read_text = read(fd, ch, letters);
	close(fd);
	
	return (0);
}
