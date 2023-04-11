#include "main.h"
/**
 * _strspn - Find character function
 * @S: address of a string
 * @accept: the value of the character
 *
 * Return: position of character
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int flag = 0;
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (i < len)
	{
		if (s[i] == *accept)
		{
			flag = i;
			break;
		}
		i++;
	}
	flag++;
	if (!flag)
		return (0);

	return (flag);
}
