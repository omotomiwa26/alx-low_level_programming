#include "search_algos.h"

/**
 * linear_search - This function uses Linear Search algorithm to search
 * for a value in an array of integers.
 * @array: A pointer to the first element of the array
 * to search in
 * @size: The number of elements in array
 * @value: The value to search for in array
 *
 * Return: the first index where value is located
 * Else: -1 if value is not found or NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
