#include "main.h"

/**
 * _strcmp - furnction compares pointers two strings.
 * @s1: string to be compared.
 * @s2: second string to be compared.
 *
 * Return: The integer difference of S1 and S2
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
