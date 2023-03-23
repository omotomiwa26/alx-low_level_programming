#include "function_pointers.h"

/**
* array_iterator - function prints each array element on a newline
* @array: array given
* @size: size of array
* @action: pointer to the function needed
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;

if (array == NULL || action == NULL)
return;

x = 0;
while (x < size)
{
action(array[x]);
x++;
}
}


