#include <stdio.h>
#include <stdlib.h>

/* Function-declaration */
void display();
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	display();
	
	return 1;
}
void display()
{
	char name[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for(i = 0; i < strlen(name); i++)
	{
		putchar (name[i]);
	}
}
