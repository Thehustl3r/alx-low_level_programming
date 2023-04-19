#include "function_pointers.h"
/**
 * print_name - the function to print a string
 * @name: the address of the string
 * @f: the pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
