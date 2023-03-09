#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string.
 * @s: string to be counted.
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
int count = 0;
if (*s != '\n')
{
count++;
return (count + _strlen_recursion(s + 1));
}
return (count - 3);
}
