#include "main.h"

/**
 * main - Program finds the sum of all integer arguments
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is passed in arguments,
 * Else: 0
 */

int main(int argc, char *argv[])
{
	int a, b, len, add;
	char *pt;

	if (argc < 2)
	printf("0\n");
	else
	{
		add = 0;
		for (a = 1; a < argc; a++)
		{
			pt = argv[a];
			len = strlen(pt);

			for (b = 0; b < len; b++)
			{
				if (isdigit(*(pt + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			add += atoi(argv[a]);
		}

		printf("%d\n", add);
	}
	return (0);
}
