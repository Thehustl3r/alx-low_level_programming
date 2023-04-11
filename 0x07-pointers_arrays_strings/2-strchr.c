#include "main.h"
/**
 * *_strchr - Find character function
 * @S: address of a string
 * @c: the value of the character
 *
 * Return: position of character
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int flag = 0;
	int len = 0;

	while (s[i] != '\0')
		len++;
	while (i < len)
	{
		if (s[i] == c)
		{
			flag = 1;
			break;
		}
		i++;
	}
	return (&s[flag]);
}
