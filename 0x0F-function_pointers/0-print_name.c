#include "function_pointers.h"

/**
* print_name - function prints name using pointer to function
* @name: string to add
* @f: pointer to function
* Return: Null
 **/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
