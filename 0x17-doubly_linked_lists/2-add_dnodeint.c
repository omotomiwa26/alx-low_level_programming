#include "lists.h"

/**
 **add_dnodeint - Function adds a new node to the beginning
 **@head: double pointer to the first node
 *@n: element to add to the node
 * Return: address of new element.
 * Else: Null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;

if (*head)
{
(*head)->prev = new_node;
}

*head = new_node;

return (new_node);
}
