#include "main.h"

/**
 * *_memset - function fills memory with a constant byte.
 * @s: character pointer to put the constant
 * @b: character constant
 * @n: integer maximum bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;

while (n > 0)

{

s[a] = b;
a++;
n--;
}
return (s);
}
