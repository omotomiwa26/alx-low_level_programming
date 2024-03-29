#include "main.h"

/**
 * create_array - function creates array of size and assign char
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array,
 * Else: NULL if fails
 *
 */

char *create_array(unsigned int size, char c)

{
	char *ptr;
	unsigned int x;

	ptr = malloc(sizeof(char) * size);

	if (size == '\0' || ptr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		ptr[x] = c;

	return (ptr);
}
