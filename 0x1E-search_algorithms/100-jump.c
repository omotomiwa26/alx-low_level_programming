#include "search_algos.h"
/**
 * jump_search - This function uses Jump Search algorithm to search
 * for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array
 * to search in
 * @size: The number of elements in array
 * @value: The value to search for in array
 * Return: the first index where value is located
 * Else: -1 if value is not found or NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, prev, current;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);
	prev = 0, current = jump;
	while (prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (current < size)
		{
			if (array[prev] <= value && value <= array[current])
				printf("Value found between indexes [%lu] and [%lu]\n", prev, current);
			break;
		}
		else
		{
			if (array[prev] <= value)
				printf("Value found between indexes [%lu] and [%lu]\n", prev, current);
			break;
		}
		prev = current;
		current = prev + jump;
	}
	while (prev <= current)
	{
		if (prev == size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
