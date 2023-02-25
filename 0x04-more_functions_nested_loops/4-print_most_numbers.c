#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 except 2,4
 * Description: prints
 * Return: void
 */

void print_most_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
		x++;
	}
	_putchar('\n');
}
