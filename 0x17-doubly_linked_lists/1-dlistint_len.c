#include "lists.h"

/**
 * dlistint_len - Function prints the number of elements
 * @h: pointer to first node
 * Return: Number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h)
{
h = h->next;
count++;
}
return (count);
}
