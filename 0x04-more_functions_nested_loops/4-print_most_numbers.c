#include "main.h"

/**
 * print_numbers - program prints 0 to 9
 * except 3 and 4
 *
 * Return: void
 */

void print_numbers(void)
{
char z;

for (z = 0; z <= 9; z++)
{
if (z != 3 && z != 4)
{
_putchar(z + '0');
}
else
{
}
}
_putchar('\n')
}
