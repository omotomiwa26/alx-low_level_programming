#include "main.h"
/**
*more_numbers - prints 0-14, 10times
*
* Return: void
*/

void more_numbers(void)
{
int i = 0;
char a, b;
while (i < 10)
{
a = 0;
while (a <= 14)
{
b = a;
if (b > 9)
{
_putchar('1');
b = a % 10;
}
_putchar(b + '0');
a++;
}
_putchar('\n');
i++;
}
}
