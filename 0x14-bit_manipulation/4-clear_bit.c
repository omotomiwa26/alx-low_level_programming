#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a given index.
 * @n: A pointer to the bit.
 * @index: The index to set the value
 * Return: 1 - if success
 * Else: -1 - if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n = (~(1UL << index) & *n);
return (1);
}
