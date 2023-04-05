#include "lists.h"

/**
 * sum_listint - function sums all the data
 * in a listint_t linkedlist
 * @head: first node in the linked list
 *
 * Return: sum
 * Else: 0, if list is empty
 */

int sum_listint(listint_t *head)
{
int addition = 0;
listint_t *tem = head;

while (tem)
{
addition = addition + tem->n;
tem = tem->next;
}

return (addition);
}
