#include "main.h"

/**
 * reverse_array - function reverses the content of an array of integers.
 * @a: array of integers to be reversed.
 * @n: number of elements in the array.
 */

void reverse_array(int *a, int n)
{
int count;
for (count = n - 1; count >= 0; count--)
{
printf("%d", a[count]);
}
}
