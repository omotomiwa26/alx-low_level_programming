#include "main.h"

/**
 * main - Program prints the product of first two aguments
 * @argc: Number of command line arguments
 * @argv: Array strings
 * Return: 1 if not enough arguments is passed to main
 * Else: 0
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		y = 1;

		for (x = 1; x < 3; x++)
		y *= atoi(argv[x]);

		printf("%d\n", y);
	}
	return (0);
}
