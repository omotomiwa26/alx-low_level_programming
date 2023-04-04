#include "lists.h"

/**
 * listint_len - function returns the number of elements in a linked lists
 * @h: linked list of type listint_t to check
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t number_of_elements = 0;

while (h)
{
number_of_elements++;
h = h->next;
}

return (number_of_elements);
}
