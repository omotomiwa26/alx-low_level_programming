#include "main.h"
/**
 * _strpbrk - function Searches a string for any of a set of bytes.
 * @s: character string to be searched.
 * @accept: character set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 * Else - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
				return (s);
		}

		s++;
	}
	return (NULL);
}
