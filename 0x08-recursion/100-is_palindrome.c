#include "main.h"
/**
 * is_palindrome - the function to check is_palindrome
 * @s: character s
 *
 * Return: 1 when is palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	s++;
	is_palindrome(s);
	return (0);
}
