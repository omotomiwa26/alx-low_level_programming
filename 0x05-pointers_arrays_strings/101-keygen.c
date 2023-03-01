#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program generates random valid password for the program 101-crackme
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, add, y;
	int check[100];

	add = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		check[x] = rand() % 78;
		add += (check[x] + '0');
		putchar(check[x] + '0');
		if ((2772 - add) - '0' < 78)
		{
			y = 2772 - add - '0';
			add += y;
			putchar(y + '0');
			break;
		}
	return (0);
	}
}
