#include "lists.h"

/**
 * get_nodeint_at_index - function returns the node at an nth
 * index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node to return.
 * Else: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int z = 0;
listint_t *tem = head;

while (tem && z < index)
{
tem = tem->next;
z++;
}

return (tem ? tem : NULL);
}
