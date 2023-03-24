#include "variadic_functions.h"

/**
* print_all - function prints anything
* @format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
int a = 0;
char *str, *sep = "";

va_list list;

va_start(list, format);

if (format)
{
while (format[a])
{
switch (format[a])
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'i':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
a++;
continue;
}
sep = ", ";
a++;
}
}

printf("\n");
va_end(list);
}
