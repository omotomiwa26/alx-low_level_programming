#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 *
 * Return: interger value of differnece between S1 and S2
 */

int _strcmp(char *s1, char *s2);
{
int a, b, result;
for (a = 0; s1[a] != '\0'; a++)
for (b = 0; s2[b] != '\0'; b++)
{
if (s1[a] == s2[b])
{
continue;
}
else
{
result s1[a] - s2[b];
}
return (result);
}
return (0);
}
