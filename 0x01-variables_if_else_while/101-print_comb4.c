#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int a = 0;
int b = 0;
int c = 0;

for (c = 0; c <= 9; c++)
{
for (b = 0; b <= 9; b++)
{
for (a = 0; a <= 9; a++)
{
if (!((a == b) || (b == c) || (b > a) || (c > b)))
{
putchar(c + '0');
putchar(b + '0');
putchar(a + '0');
if (!(a == 9 && c == 7 && b == 8))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar ('\n');
return (0);
}
