#include "main.h"
/**
* main - Entry point
* Description: prints 'putchar \n'
* Return: Always 0 (success)
*/

int main(void)
{
char str[] = "putchar\n";
int a = 0;

while (str[a] != '\0')
	{
	char i = str[a];

_putchar(i);
	a++;
	}
return (0);
}
