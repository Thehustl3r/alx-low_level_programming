#include "main.h"
/**
 * reverse_array - function that reverse the int array
 * @a: pointer a
 * @n: integer n
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, mid, tmp;

	i = 0;

	mid = n / 2;
	if (n % 2 != 0)
		mid++;
	n--;
	while (mid > 0)
	{
		tmp = a[n];
		a[n] = a[i];
		a[i] = tmp;
		mid--;
		n--;
		i++;
	}

}
