#include "main.h"

/**
 * _abs - Entry point
 * @n: n is an integer variable
 * Description: program prints the absolute value of an integer
 * Return: int n for the condition tested true
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
