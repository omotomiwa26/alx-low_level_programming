#include <stdio.h>

/**
 * main - Entry Point
 * Description: program Prints the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (Success)
 */
int main(void)
{
	int multiple, sum = 0;

	while (multiple < 1024)
	{
		if ((multiple % 3 == 0) || (multiple % 5 == 0))
		{
			sum += multiple;
		}

		multiple++;
	}

	printf("%d\n", sum);
	return (0);
}
