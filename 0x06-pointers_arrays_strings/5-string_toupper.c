#include "main.h"

/**
 * string_toupper - lower case to upper case
 * @z: pointer char variable
 *
 * Return:upper case string
 */

char *string_toupper(char *z)
{
int a;

for (a = 0; z[a] != '\0'; a++)
z[a] = z[a] - 32;

return (0);
}
