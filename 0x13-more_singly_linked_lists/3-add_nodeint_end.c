#include "lists.h"

/**
 * add_nodeint_end - function adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert at the end the list
 *
 * Return: pointer to the new node.
 * Else: NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end_new;
listint_t *tem = *head;

end_new = malloc(sizeof(listint_t));
if (!end_new)
return (NULL);

end_new->n = n;
end_new->next = NULL;

if (*head == NULL)
{
*head = end_new;
return (end_new);
}

while (tem->next)
tem = tem->next;

tem->next = end_new;

return (end_new);
}
