#include "lists.h"

/**
 * free_listint_safe - fucntion frees a linked list(safe version)
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed linkedlist
 */

size_t free_listint_safe(listint_t **h)
{
size_t length = 0;
int df;
listint_t *tem;

if (!h || !*h)
return (0);

while (*h)
{
df = *h - (*h)->next;
if (df > 0)
{
tem = (*h)->next;
free(*h);
*h = tem;
length++;
}
else
{
free(*h);
*h = NULL;
length++;
break;
}
}

*h = NULL;

return (length);
}
