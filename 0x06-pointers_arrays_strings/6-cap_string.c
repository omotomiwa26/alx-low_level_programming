#include "main.h"

/**
 * cap_string - function capitalizes all words of a string.
 * @str: string to be capitalized.
 *
 * Return: pointer to the changed string.
 */

char *cap_string(char *str)
{
if (str[0] >= 97 && str[0] <= 122)
str[0] -= 32;
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ',' ||
str[i] == ';' ||
str[i] == ' ' ||
str[i] == '\n' ||
str[i] == '\t' ||
str[i] == '.' ||
str[i] == '!' ||
str[i] == '?' ||
str[i] == '"' ||
str[i] == '(' ||
str[i] == ')' ||
str[i] == '{' ||
str[i] == '}')
if (str[i + 1] >= 97 && str[i + 1] <= 122)
str[i + 1] -= 32;
}
return (0);
}
