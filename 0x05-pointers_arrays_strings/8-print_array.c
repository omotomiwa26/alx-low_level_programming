#include "main.h"
#include <stdio.h>

/**
 * print_array - function prints `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 *
 */

void print_array(int *a, int n)
{
	int z;

	z = 0;
	for (n--; n >= 0; n--, z++)
	{
		printf("%d", a[z]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
