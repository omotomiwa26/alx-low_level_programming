#include "main.h"

/**
 * reverse_array - function reverses the content of an array of integers.
 * @a: array of integers to be reversed.
 * @n: number of elements in the array.
 */

void reverse_array(int *a, int n)
{
{
int count, j;
for (j = n - 1; j >= n / 2; j--)
{
count = a[n - 1 - j];
a[n - 1 - j] = a[j];
a[j] = count;
}
}
