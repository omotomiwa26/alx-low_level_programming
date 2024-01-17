#include "search_algos.h"

/**
 * print_sub_array - This function prints a sub-array
 * to perform binary search
 * @array: Pointer to the array to print
 * @start: The index of the first array
 * @end: The index of the last array
 * Return: The list of sub-array
 */

void print_sub_array(int *array, size_t start, size_t end)
{
	size_t x;

	for (x = start; x <= end; x++)
	{
		printf("%d", array[x]);
		if (x < end)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - This function uses Binary search algorithm to search
 * for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array
 * to search in
 * @size: The number of elements in array
 * @value: The value to search for in array
 * Return: The index where value is located
 * Else: -1 if value is not found or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
	{
		return (-1);
	}
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		print_sub_array(array, left, right);
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = (mid + 1);
		}
		else
		{
			right = (mid - 1);
		}
	}
	return (-1);
}
