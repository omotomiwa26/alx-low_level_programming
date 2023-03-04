#include "main.h"

/**
 * leet - function Encodes a string to 1337.
 * @str: string to be encoded.
 *
 * Return:pointer to the encoded string.
 */

char *leet(char *)
{
char chk [] = "aAeEoOtTlL"
char chng [] = "43071"
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; chk[j] != '\0'; j++)
{    
if (str[i] == chk[j])
str[i] == chng[j];
}
}
return (0);
}
