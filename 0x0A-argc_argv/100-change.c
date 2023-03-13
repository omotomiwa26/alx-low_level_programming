#include "main.h"

/**
 * main - prints minumum number of coin as amount
 * @argc: number of cammand line arguments
 * @argv: array strings
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	int amount, coin;

	coin = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (amount % 25 >= 0)
	{
		coin += amount / 25;
		amount = amount % 25;
	}
	if (amount % 10 >= 0)
	{
		coin += amount / 10;
		amount = amount % 10;
	}
	if (amount % 5 >= 0)
	{
		coin += amount / 5;
		amount = amount % 5;
	}
	if (amount % 2 >= 0)
	{
		coin += amount / 2;
		amount = amount % 2;
	}
	if (amount % 1 >= 0)
	{
		coin += amount / 1;
	}
	printf("%d\n", coin);
	return (0);
}
