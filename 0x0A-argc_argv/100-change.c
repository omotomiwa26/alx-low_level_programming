#include "main.h"

/**
 * coinConv - function that coverts the coin
 * @x: Passed variable from main for conversion
 * Return: Number of min coin needed
 */
int coinConv(int x)
{
int c = 0;

while (x != 0)
{
if (x % 10 == 9 || x % 10 == 7)
x -= 2;
else if (x % 25 == 0)
x -= 25;
else if (x % 10 == 0)
x -= 10;
else if (x % 5 == 0)
x -= 5;
else if (x % 2 == 0)
{
if (x % 10 == 6)
x -= 1;
else
x -= 2;
}
else
x -= 1;

c++;
}

return (c);
}

/**
 * main - only one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array strings
 * Return: 0 if only 1 argument is passed
 * Else: 1
 */
int main(int argc, char *argv[])
{
	int a, cn;

	cn = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);

	if (a < 0)
		printf("0\n");

	else
	{
		cn = coinConv(a);

		printf("%d\n", cn);
	}

	return (0);
}
