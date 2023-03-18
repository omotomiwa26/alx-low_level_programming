#include "main.h"

/**
 * *array_range - function creates an array of integers
 * @min: minimum values stored
 * @max: maximum values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{

int *ptr;
int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

j = 0;
while (min <= max)
{
ptr[j] = min++;
j++;
}
	return (ptr);
}
