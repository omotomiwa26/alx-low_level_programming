#include "main.h"

/**
 * rev_string - function prints a string in reverse
 * @s: string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int length, i, half;
	char str;


	for (length = 0; s[length] != '\0'; length++)

	i = 0;
	half = length / 2;

	while (half--)
	{
		str = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = str;
		i++;
	}
}
