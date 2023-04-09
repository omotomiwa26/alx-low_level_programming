#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1 at a given index.
 * @n: A pointer to the bit.
 * @index: The index to set the bit value
 * Return: 1 - if success
 * Else: -1 - if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n |= (1UL << index);
return (1);
}
