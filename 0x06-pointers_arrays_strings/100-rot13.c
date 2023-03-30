#include "main.h"
/**
 * *rot13 - convert to uppercase
 * @str: a char pointer
 *
 * Return: character
 */
char *rot13(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		while ((str[i] > 64 && str[i] < 91) || (
				str[i] > 96 && str[i] < 123))
		{
			if ((*(str + i) > 64 && *(str + i) < 91 && *(str + i) < 78 ) || (*(str + i) > 96 && *(str + i) < 123  && *(str + i) < 110) )
			{
				str[i] += 13;
			}
			else 
				str[i] -= 13;
			i++;
		}
		i++;
	}
	return (str);
}
