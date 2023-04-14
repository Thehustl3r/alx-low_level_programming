#include "stdio.h"
/**
 * main - Entry program
 * @argc: number of argrument
 * @argv: argrument
 *
 * Return: 0 always
 */

int main(argc, argv)
{
	if (argc == 3)
	{
		return (argv[1] * argv[2]);
	}

	return (0);
}
