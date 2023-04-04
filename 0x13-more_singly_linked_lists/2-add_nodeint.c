#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert at the beginning that new node
 *
 * Return: pointer to the new node.
 * Else: NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
