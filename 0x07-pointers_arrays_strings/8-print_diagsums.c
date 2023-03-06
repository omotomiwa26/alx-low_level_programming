#include "main.h"

/**
 * print_diagsums - Funtion prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: matrix of integers.
 * @size: size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int count, add1 = 0, add2 = 0;

	for (count = 0; count < size; count++)
	{
		add1 += a[count];
		a += size;
	}

	a -= size;

	for (count = 0; count < size; count++)
	{
		add2 += a[count];
		a -= size;
	}

	printf("%d, %d\n", add1, add2);
}
