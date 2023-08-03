#include "main.h"

/**
 * binary_to_uint - function converts binary number to integer
 * @b: pointer to string of char
 *
 * Return: return the converted value to standard output
 * Else: 0 - if b is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int int_result = 0, z;

	if (!b)
		return (0);

	for (z = 0; b[z] != '\0'; z++)
	{
		if (b[z] < '0' || b[z] > '1')
			return (0);

		int_result = 2 * int_result + (b[z] - '0');
	}

	return (int_result);
}
