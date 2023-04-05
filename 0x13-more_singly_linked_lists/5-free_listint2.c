#include "lists.h"

/**
 * free_listint2 - function frees a linked list
 * @head: pointer to the linkedlist list to free
 *
 */

void free_listint2(listint_t **head)
{
listint_t *tem;

if (head == NULL)
return;

while (*head)
{
tem = (*head)->next;
free(*head);
*head = tem;
}

*head = NULL;
}
