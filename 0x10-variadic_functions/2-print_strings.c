#include "variadic_functions.h"

/**
* print_strings - function prints strings, followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed.
*
* Description: If separator is NULL, it is not printed.
* If one of the strings is NULL, (nil) is printed.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int index;

va_start(strings, n);


index = 0;
while (index < n)
{
str = va_arg(strings, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
index++;
}

printf("\n");

va_end(strings);
}
