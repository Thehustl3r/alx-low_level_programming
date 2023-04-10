#include "main.h"
/**
 * _strcmp - the function to compare two string
 * @s1: a character s1
 * @s2: a character s2
 *
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, len1, len2, result;

	i = 0;
	len1 = 0;
	len2 = 0;
	result = 0;

	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;
	while (i < len1) 
	{
		if (*(s1 + i) != *(s2 + i))
		{
			result = *(s1 + i) - *(s2 + i);
			break;
		}
		i++;
	}
	return (result);
}
