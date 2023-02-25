#include "main.h"
/**
 * print_number - prints integer numbers
 * @y: number to be printed
 * Return:void
 */

void print_number(int y)
{
	unsigned int z;

	z = y;
	if (y < 0)
	{
		_putchar(45);
		z = -y;
	}
	if (z / 10)
		print_number(z / 10);
	_putchar((z % 10) + '0');
}
