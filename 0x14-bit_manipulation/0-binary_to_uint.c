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
unsigned int int_result = 0, z = 1;

	if (!b)
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		int_result += (b[length] - '0') * z;
		z *= 2;
	}

	return (int_result);
}
