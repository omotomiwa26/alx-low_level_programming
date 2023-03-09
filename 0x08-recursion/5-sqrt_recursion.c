#include "main.h"
#include <math.h>

/**
 * sqrt_recur - Funtion computes square root number.
 * @i: number to find the square root.
 * @m: root to be tested.
 *
 * Return: If number has a natural square root - the square root.
 * Else -1: If number does not have a natural square root
 */

int sqrt_recur(int i, int m)
{
if (m == 1)
return (1);
else if (i  == m / 2)
return (-1);
else if (i * i == m)
return (i);
return (sqrt_recur(i + 1, m));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root.
 *
 * Return: If n has a natural square root - the natural square root of n.
 * Else -1: If n does not have a natural square root
 */

int  _sqrt_recursion(int n)
{
return (sqrt_recur(1, n));
}
