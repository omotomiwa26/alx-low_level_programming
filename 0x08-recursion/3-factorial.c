#include "main.h"

/**
 * factorial - function returns the factorial number.
 * @n: number to compute factorial.
 *
 * Return: If n > 0 - factorial of n.
 *         If n < 0 - 1 error.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (1);
else if (n > 0)
return (n * factorial(n - 1));
return (0);
}
