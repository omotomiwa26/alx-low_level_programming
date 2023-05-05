#include "main.h"

/**
 * print_binary - function prints number in binary
 * @n: number to be printed
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
