#include <stdio.h>

/**
 * main -prints  prime numbers
 *
 * Return: 0
 */

int main(void)
{
	long number = 612852475143;
	long div = 2;
	long large_prime = 0;

	while (number != 1)
	{
		if (number % div == 0)
		{
			number = number / div;
			large_prime = div;
		}
		div += 1;
	}
	printf("%ld\n", large_prime);
	return (0);
}
