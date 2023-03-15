#include "main.h"

/**
 * str_concat - concantenates two strings
 * @s1: string one
 * @s2: string two
 * Return: concat of strings s1 and s2
 */

char *str_concat(char *s1, char *s2)

{

	char *conc;
	int i, c;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

i = c = 0;

	while (s1[i] != '\0')

		i++;

	while (s2[c] != '\0')

		c++;

	conc = malloc(sizeof(char) * (i + c + 1));

	if (conc == NULL)

		return (NULL);

	i = c = 0;
	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}
while (s2[c] != '\0')
{
conc[i] = s2[c];
i++;
c++;
}
conc[i] = '\0';
return (conc);
}
