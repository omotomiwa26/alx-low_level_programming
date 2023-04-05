#include "lists.h"

/**
 * delete_nodeint_at_index - funtion deletes a node in a linked list
 * at nth  index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success)
 * Else: -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tem = *head;
listint_t *curr_pos = NULL;
unsigned int x = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(tem);
return (1);
}

while (x < index - 1)
{
if (!tem || !(tem->next))
return (-1);
tem = tem->next;
x++;
}


curr_pos = tem->next;
tem->next = curr_pos->next;
free(curr_pos);

return (1);
}
