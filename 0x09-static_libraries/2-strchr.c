#include "main.h"

/**
 * _strchr - function locates a character in a string.
 * @s: string to be searched.
 * @c: character to be located.
 *
 * Return: If c is found - a pointer to the first occurence.
 * Else - return NULL.
 */

char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] >= '\0')
{
if (s[i] == c)
return (s + i);
i++;
}

return (NULL);
}
