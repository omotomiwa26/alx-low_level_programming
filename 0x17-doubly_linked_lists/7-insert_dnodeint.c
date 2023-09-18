#include "lists.h"
/**
 **insert_dnodeint_at_index - Function inserts a new node at the given index
 **@h: double pointer to the list
 *@idx: integer index to insert the node
 *@n: new node to add
 *Return: address of the new node.
 *Else: Null -if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current;
unsigned int current_index;
dlistint_t *new_node;

if (idx == 0)
{
	return (add_dnodeint(h, n));
}
new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
	return (NULL);
}
new_node->n = n;
current = *h;
current_index = 0;

while (current && current_index < idx - 1)
{
	current = current->next;
	current_index++;
}

if (current_index < idx - 1 || current == NULL)
{
	free(new_node);
	return (NULL);
}
new_node->prev = current;
new_node->next = current->next;

if (current->next)
{
	current->next->prev = new_node;
}
current->next = new_node;

return (new_node);
}
