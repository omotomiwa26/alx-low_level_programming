#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is inserted
 * @n: element to insert in the new node
 *
 * Return: pointer to the new node.
 * Else: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int y;
listint_t *insert_new;
listint_t *tem = *head;

insert_new = malloc(sizeof(listint_t));
if (!insert_new || !head)
return (NULL);

insert_new->n = n;
insert_new->next = NULL;

if (idx == 0)
{
insert_new->next = *head;
*head = insert_new;
return (insert_new);
}

for (y = 0; tem && y < idx; y++)
{
if (y == idx - 1)
{
insert_new->next = tem->next;
tem->next = insert_new;
return (insert_new);
}
else
tem = tem->next;
}

return (NULL);
}
