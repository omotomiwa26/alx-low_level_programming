#include "main.h"

/**
 * leet - function Encodes a string to 1337.
 * @str: string to be encoded.
 *
 * Return:pointer to the encoded string.
 */

char *leet(char *str)
{
char chk[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
int i = 0, j;

while (str[i])
{
for (j = 0; j <= 7; j++)
{
if (str[i] == chk[j] ||
str[i] - 32 == chk[j])
str[i] = j + '0';
}
i++;
}
return (str);
}
