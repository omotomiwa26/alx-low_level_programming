#include "main.h"

/**
 * _strncpy - Copy from string src into dest.
 *
 * @dest:  new string.
 * @src: old string.
 * @n: integer of string passed to copy.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int a, b;

for (a = 0; dest[a] != '\n'; a++)
;
for (b = 0; b <= (n - 1); b++)
{
dest[a] = src[b];
a++;
}
return (dest);
}
