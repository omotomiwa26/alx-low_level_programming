#include "main.h"

/**
 * flip_bits - function counts the number of bits
 * needed to flip
 * @n: number to count
 * @m: number to flips
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int xor_res = n ^ m;

while (xor_res != 0)
{
if (xor_res & 1)
{
count++;
}
xor_res >>= 1;
}

return (count);
}
