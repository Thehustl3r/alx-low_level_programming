#include "main.h"
/**
 * wildcmp - the function that compares the string
 * @s1: an adress of the string
 * @s2: an adress of second string
 *
 * Return: 1 if the match otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (1);
	s1++;
	s2++;
	wildcmp(s1, s2);
	return (0);
}
