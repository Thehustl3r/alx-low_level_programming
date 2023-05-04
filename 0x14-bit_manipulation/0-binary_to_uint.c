#include "main.h"

/**
 * binary_to_uint - the function that convert binary to int
 * @b: pointer to the string
 * Return: an Decimal number otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int len = 0, power = 0;	

	if (!b)
		return (0);
	while (b[len])
		len++;

	while (len--)
	{
		power = len;
		if (*b == '0' || *b == '1')
		{
			if (*b == '1')
				result = result + pow(2, power);	

		}
		else
		{
			return (0);
		}
		b++;
	}

	return (result);
}
