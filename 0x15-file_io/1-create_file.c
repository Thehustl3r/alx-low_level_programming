#include "main.h"

/**
 * create_file - Function that create the file
 * @filename: name of the function
 * @text_content: Address of the text to be writtern
 * Return: create new file otherwise truncate it.
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
		len++;

	fp = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);

	write(fp, text_content, len);
	close(fp);
	return (1);
}
