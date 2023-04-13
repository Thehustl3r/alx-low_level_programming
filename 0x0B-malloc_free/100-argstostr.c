#include <stdlib.h>
#include "main.h"
/**
 * argstostr -  concatenate all the argv
 * @ac: number of argument
 * @av: address of argv
 *
 * Return: character
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int len = 0;
	char *new;

	if (ac < 3)
		return (0);
	new = (char *)malloc(ac * sizeof(char));
	
	for (;i < ac; i++)
	{
		new[i] = av[i];
		_putchar("\n");
	}
	return (new);
}
