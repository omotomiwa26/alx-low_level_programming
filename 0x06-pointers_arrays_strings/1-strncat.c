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
int a, b;

for (a = 0; dest[a] != '\0'; a++)
;
for (b = 0; b <= n - 1; b++)
{
dest[a] = src[b];
a++;
}
return (dest);
}
