#include <stdio.h>

/**
 * main - Entry point
 * Description: program Prints the first 50 fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	int i = 0;
	long fib1 = 1, fib2 = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", fib1);
		else if (i == 1)
			printf(", %ld", fib2);
		else
		{
			fib2 += fib1;
			fib1 = fib2 - fib1;
			printf(", %ld", fib2);
		}

		++i;
	}

	printf("\n");
	return (0);
}
