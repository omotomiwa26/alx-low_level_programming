#include "lists.h"

/**
 * free_listint - function frees a linked list
 * @head: linkedlist list to be free
 *
 */

void free_listint(listint_t *head)
{
listint_t *tem;

while (head)
{
tem = head->next;
free(head);
head = tem;
}
}
