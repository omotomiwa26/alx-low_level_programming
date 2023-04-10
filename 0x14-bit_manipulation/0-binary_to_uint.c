#include "main.h"

/**
 * binary_to_uint - function converts binary number to integer
 * @b: pointer to string of char
 *
 * Return: return the converted value to standard output
 * Else: Null
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int length = strlen(b);
unsigned int int_result = 0, z = 1;

if (!b)
return (0);
for (z = 0; z < length; z++)
{
if (b[z] < '0' || b[z] > '1')
return (0);
{
if (b[z] == '1')
{
int_result += 1 << (length - z - 1);
}
else if (b[z] != '0')
{
return (0);
}
}
}
return (int_result);
}
