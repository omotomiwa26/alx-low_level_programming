#include "function_pointers.h"

/**
* int_index - function returns index place if comparison is true, otherwise  -1
* @array: array given
* @size: size of elements in array
* @cmp: pointer to func used to compare values
* Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int y;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

y = 0;
while (y < size)
{
if (cmp(array[y]))
return (y);
y++;
}
return (-1);
}
