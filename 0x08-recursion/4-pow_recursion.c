#include "main.h"
#include <math.h>

/**
 * _pow_recursion - function returns the value of x^y.
 * @x: number to be raised.
 * @y: power.
 *
 * Return: The value of x**y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);
else if (y > 1)
return (x * _pow_recursion(x, y - 1));
return (x);
}
