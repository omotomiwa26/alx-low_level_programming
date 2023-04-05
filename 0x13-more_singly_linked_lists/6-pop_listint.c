#include "lists.h"

/**
 * pop_listint - function deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the head node data that was deleted
 * Else: 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
listint_t *tem;
int del_dat;

if (!head || !*head)
return (0);

del_dat = (*head)->n;
tem = (*head)->next;
free(*head);
*head = tem;

return (del_dat);
}
