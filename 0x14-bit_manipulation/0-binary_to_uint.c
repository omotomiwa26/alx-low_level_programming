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
int length = strlen(b);
unsigned int int_result = 0;
int z;

if (!b)
return (0);
for (z = 0; z < length; z++)
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
return (int_result);
}
