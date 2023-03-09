#include "main.h"
#include <math.h>

/**
 * isPrime - function checks for initial prime number.
 * @a: number to check.
 * @div: The divisor.
 *
 * Return: If the number is prime - 0.
 *         Else - 1.
 */

int isPrime(int a, int div)

{
if (a <= 2)
return ((a == 2) ? 1 : 0);
else if (a % div == 0)
return (0);
else if (div * div > a)
return (1);
return (isPrime(a, div + 1));
}
/**
 * is_prime_number - function returns final prime number.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         Else - 1.
 */

int is_prime_number(int n)
{
int div = 2;
return (isPrime(n, div));
}
