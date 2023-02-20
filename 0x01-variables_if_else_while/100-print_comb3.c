#include <stdio.h>

/**
* main - program to solve combination of two digits
*
* Description: combination of two digits
*
* Return: Always 0 (Success)
*/

int main(void)
{
int a, b;

for (b = 0; b <= 9; b++)
{
for (a = 0; a <= 9; a++)
{
if (!((a == b) || (b > a)))
{
putchar(b + '0');
putchar(a + '0');
if (!(a == 9 && b == 8))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
