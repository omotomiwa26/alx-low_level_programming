#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program generates random passwords for 101-crackme
 * Return: 0
 */
int main(void)
{
	int addition;
	char z;

	srand(time(NULL));
	while (addition <= 2645)
	{
		z = rand() % 128;
		addition += z;
		putchar(z);
	}
	putchar(2772 - addition);
	return (0);
	putchar('\n');
}
