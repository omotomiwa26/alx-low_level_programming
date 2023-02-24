#include "main.h"

/**
 * print_numbers - program prints 0 to 9
 * except 2 and 4
 *
 * Return: void
 */

void print_numbers(void)
{
char z;

for (z = 0; z <= 9; z++)
{
if (z == 2 || z == 4)
continue;
_putchar(z + '0');
}

_putchar('\n')
}
