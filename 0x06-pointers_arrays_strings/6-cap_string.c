#include "main.h"
/**
 * *cap_string - convert to uppercase
 * @str: a char pointer
 *
 * Return: character
 */
char *cap_string(char *str)
{
	int len, i;

	len = 0;
	i = 0;

	while (*(str + len) != '\0')
		len++;
	while (i < len)
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}
