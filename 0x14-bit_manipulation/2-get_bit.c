#include "main.h"

/**
 * get_bit - function gets the value of a bit at an index.
 * @n: The bit value
 * @index: The index to get the value.
 * Return: return value of bit.
 * Else: -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bit_ind;

if (index > 63)
return (-1);

bit_ind = (n >> index) & 1;
return (bit_ind);
}
