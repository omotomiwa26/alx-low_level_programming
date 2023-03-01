#include "main.h"

/**
 * puts_half - function prints the second half of a string
 * @str: the string reference
 * Return: 0
 */

void puts_half(char *str)
{
	int y;

	for (y = 0; str[y] != '\0'; y++)

	y++;
	for (y /= 2; str[y] != '\0'; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
