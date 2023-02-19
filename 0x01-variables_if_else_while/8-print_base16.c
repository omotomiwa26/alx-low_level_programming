#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int num;
char alph;
for (num = 0; num < 10; num++)
putchar(num + '0');
for (alph = 'a'; alph <= 'f'; alph++)
putchar(alph);

putchar('\n');

return (0);
}
