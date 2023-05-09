include "main.h"

/**
 * create_file - Function that create the file
 * @filename: name of the function
 * @text_content: Address of the text to be writtern
 * Return: create new file otherwise truncate it.
 */
int create_file(const char *filename, char *text_content)
{
	int fdo, fdw, len = 0;
	char *ch;

	while (text_content[len] != '\0')
		len++;
	ch = malloc(len);
	if (ch == NULL)
		return (-1);
	fdo = open(filename, O_RDWR);
	fdw = write(fdo, ch, len);
	close(fdo);
	return (fdw);
}
