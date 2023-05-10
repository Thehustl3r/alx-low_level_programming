#include "main.h"

/**
 * create_file - Function that create the file
 * @filename: name of the function
 * @text_content: Address of the text to be writtern
 * Return: create new file otherwise truncate it.
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fp = fopen(filename, "w");
	fprintf(fp, "%s\n", text_content);
	fclose(fp);
	return (1);
}
