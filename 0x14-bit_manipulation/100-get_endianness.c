#include "main.h"

/**
 * get_endianness - function checks endianness
 * Return: 0 - if big endian.
 * Else: 1 - if little endian
 */

int get_endianness(void)
{
unsigned int h = 1;
char *w = (char *)&h;
return (*w == 1);
}
