#include <stdio.h>

/**
 * find_largest_prime_factor - Entry function
 * @number: An integer number
 * Return: largest prime number always
 */
int find_largest_prime_factor(int number);

/**
 * main - Entry function
 * Return: 0 always
 */
int main(void)
{
	int number;

	number = 1231952;

	printf("%d \n", find_largest_prime_factor(number));

	return (0);
}

/**
 * find_largest_prime_factor - Entry function
 * @number: An integer number
 * Return: largest prime number always
 */
int find_largest_prime_factor(int number)
{
	int i = 1;
	int largest = 1;
	int j = 2;

	while (i <= number)
	{
		if (number % i == 0)
		{
			number = number / i;

			for (; j <= i; j++)
			{
				if ((i % (j - 1) != 0))
				{
					if (i >  largest)
						largest = i;
				}
			}
			i = 2;
		}
		i++;
	}
	return (largest);
}
