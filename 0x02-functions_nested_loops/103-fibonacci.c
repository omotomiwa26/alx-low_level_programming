#include <stdio.h>
/**
 * main - Entry Point
 * Description: Program computes and prints even numbers < 4,000,000
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int i = 0, j = 1, num = 0;
	int sum = 0;

	while (num < 4000000)
	{
		num = i + j;
		i = j;
		j = num;
		if (num % 2 == 0)
			sum += num;
	}
	printf("%i\n", sum);
	return (0);
}
