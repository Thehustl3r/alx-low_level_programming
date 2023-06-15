#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - the function add two numbers
 * @a: integer a
 * @b: second number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -  the function that subtract two numbers
 * @a: fist number
 * @b: second number
 * Retunr: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the function that multipy two numbers
 * @a: first number
 * @b: second number
 * Return: nultiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the function that divides two numbers
 * @a: first number
 * @b: econd number
 * Return: divides
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - the function that return the modules
 * @a: first number
 * @b: second number
 * Return: module
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
