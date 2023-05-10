#include "main.h"

/**
 * append_text_to_file - function that append the file
 * @filename: name of a file
 * @text_content: text needed to be written
 * Return: 1 otherwise if it fails return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[len] != '\0')
		len++;
	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);
	write(fd, text_content, len);
	close(fd);
	return (1);
}
