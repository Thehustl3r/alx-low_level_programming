#include "main.h"
/**
 * *leet - convert to uppercase
 * @str: a char pointer
 *
 * Return: character
 */
char *leet(char *str)
{
	int len, i;

	len = 0;
	i = 0;

	while (*(str + len) != '\0')
		len++;
	while (i < len)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		if (str[i] == 'e' || str[i] == 'E')
			str[i] = '3';
		if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		if (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
		i++;
	}
	return (str);
}
