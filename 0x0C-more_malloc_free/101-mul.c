#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int length1, length2, len, i, rem, num1, num2, *ans, z = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	length1 = _strlen(str1);
	length2 = _strlen(str2);
	len = length1 + length2 + 1;
	ans = malloc(sizeof(int) * len);
	if (!ans)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		ans[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		num1 = str1[length1] - '0';
		rem = 0;
		for (length2 = _strlen(str2) - 1; length2 >= 0; length2--)
		{
			num2 = str2[length2] - '0';
			rem += ans[length1 + length2 + 1] + (num1 * num2);
			ans[length1 + length2 + 1] = rem % 10;
			rem /= 10;
		}
		if (rem > 0)
			ans[length1 + length2 + 1] += rem;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (ans[i])
			z = 1;
		if (z)
			_putchar(ans[i] + '0');
	}
	if (!z)
		_putchar('0');
	_putchar('\n');
	free(ans);
	return (0);
}
