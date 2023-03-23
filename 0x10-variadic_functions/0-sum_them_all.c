#include "variadic_functions.h"

/**
 * sum_them_all - function returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: 0 - If n == 0..
 * Else - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int x, sum = 0;

va_start(ap, n);

for (x = 0; x < n; x++)

sum += va_arg(ap, int);
va_end(ap);
 
return (sum);
}
