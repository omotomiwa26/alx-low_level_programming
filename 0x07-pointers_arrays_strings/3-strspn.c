#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring.
 * @s: character string to be searched.
 * @accept: prefix to be measured.
 *
 * Return: number of bytes in s which
 * consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int b = 0;
int count;

while (*s)
{
for (count = 0; accept[count]; count++)

{

if (*s == accept[count])
{
b++;

break;

}

else if (accept[count + 1] == '\0')
return (b);
}

s++;
}
return (b);
}
