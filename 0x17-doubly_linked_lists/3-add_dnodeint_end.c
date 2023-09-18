#include "lists.h"

/**
 **add_dnodeint_end - Function adds a new node to the end
 **@head: double pointer to the list
 *@n: element to add to the node
 * Return: address of new element.
 * Else: Null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *current;
dlistint_t *new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

current = *head;
while (current->next)
{
current = current->next;
}

current->next = new_node;
new_node->prev = current;

return (new_node);
}
