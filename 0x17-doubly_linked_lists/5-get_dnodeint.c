#include "lists.h"
/**
 **get_dnodeint_at_index - Function returns the node of a list
 *@head: Pointer to the list
 *@index: integer index of the node
 *Return: index of the node.
 *Else: Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int current_index = 0;

while (current)
{
if (current_index == index)
{
return (current);
}
current = current->next;
current_index++;
}
return (NULL);
}
