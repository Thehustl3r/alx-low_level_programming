#include "main.h"
/**
 * _strpbrk - Find character function
 * @S: address of a string
 * @accept: the value of the character
 *
 * Return: position of character
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int flag = 0;
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (i < len)
	{
		while (*accept != '\0')
		{
			if (s[i] == *accept)
			{
				flag = i;
				break;
			}
			s++;
		}
		i++;
	}
	if (!flag)
		return (0);

	return (&s[flag]);
}
