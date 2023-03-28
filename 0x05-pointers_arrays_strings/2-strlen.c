#include "main.h"
/**
 *  _strlen - function to print size of string
 *  @s: char s
 *
 *  Return: return size
 */

int _strlen(char *s)
{
	int c = 0;

	while(*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
