#include "main.h"

/**
 * *_memcpy - function copies memory area
 * @dest: character memory area
 * @src: character source
 * @n: integer length of src
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;

while (x < n)
{
dest[x] = src[x];
x++;
}
return (dest);
}
