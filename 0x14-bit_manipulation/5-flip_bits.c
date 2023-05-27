#include "main.h"
#include "stdio.h"

void convert(unsigned long int *, unsigned long int);
unsigned long int _pow(unsigned int, unsigned int);
/**
 * flip_bits - the function that compare by flip
 * @n: first number
 * @m: second number
 * Return: flip number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int tmp, *arr1, *arr2;
	unsigned int flip = 0, len1 = 0, i = 0;

	if (n == ULONG_MAX || n == (ULONG_MAX - 1))
	{
		while (result)
		{
			flip += result & 1;
			result >>= 1;
		}
		return (flip);
	}
	if (n == m)
		return (0);

	if (n < m)
	{
		tmp = n;
		n = m;
		m = tmp;
	}

	tmp = 1;
	while (tmp <= n)
	{
		tmp = _pow(2, len1);
		len1++;
	}
	len1 -= 1;
	arr1 = malloc(sizeof(unsigned int long) * len1);
	if (arr1 == NULL)
		return (-1);
	arr2 = malloc(sizeof(unsigned int long) * len1);
	if (arr2 == NULL)
		return (-1);
	while (i < len1)
		arr2[i++] = 0;

	convert(arr1, n);
	convert(arr2, m);
	for (i = len1; i > 0; i--)
	{
		if (arr1[i - 1] != arr2[i - 1])
			flip++;
	}
	return (flip);
}

/**
 * convert - the function that convert into binary
 * @arr: address of arr
 * @num: the number
 * Return: Nothing
 */
void convert(unsigned long int *arr, unsigned long int num)
{
	unsigned long int tmp, i = 0, comp, j = 0;

	if (num == 1)
		arr[0] = 1;
	while (num > 1)
	{
		comp = i;
		i = 0;
		tmp = 1;
		while (tmp <= num)
		{
			tmp = _pow(2, i);
			i++;
		}
		i = i - 2;
		tmp = _pow(2, i);
		if (j == 0)
			j = i;
		while (comp > i + 1)
		{
			arr[j--] = 0;
			comp--;
		}
		arr[j--] = 1;
		if (num >= tmp)
			num = num - tmp;
		else
			break;
		if (num == 1 && i == 1)
			arr[j] = 1;
		if (num == 0 && i != 0)
		{
			while (i--)
				arr[j--] = 0;
		}
		if (num == 1 && i > 0)
		{
			while (i > 1)
			{
				arr[j--] = 0;
				i--;
			}
			arr[j] = 1;
		}
	}
}

/**
 * _pow - function that returns the power
 * @a: number to be powerd
 * @b: times to be powerd
 * Return: result
 */
unsigned long int _pow(unsigned int a, unsigned int b)
{
	unsigned long int result = 1;

	while (b--)
		result *= a;
	return (result);
}
