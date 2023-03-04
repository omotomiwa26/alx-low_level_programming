#include "main.h"

/**
 * _strncat - concantenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: integer of strings passed
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a++])
		b++;
	for (a = 0; src[a] && a < n; a++)
		dest[b++] = src[a];
	return (dest);
}