#include "lists.h"

/**
 * loop_linked_list_int_length - function counts the number of unique nodes
 * while looping a linked list listint_t.
 * @head: A pointer to the head of the linkedlist listint_t to check.
 *
 * Return: 0 - If the list is not looped.
 * Else: the number of unique nodes in the list.
 */

size_t loop_linked_list_int_length(const listint_t *head)
{
const listint_t *tor, *hr;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

tor = head->next;
hr = (head->next)->next;

while (hr)
{
if (tor == hr)
{
tor = head;
while (tor != hr)
{
nodes++;
tor = tor->next;
hr = hr->next;
}

tor = tor->next;
while (tor != hr)
{
nodes++;
tor = tor->next;
}

return (nodes);
}

tor = tor->next;
hr = (hr->next)->next;
}

return (0);
}


/**
 * print_listint_safe - function prints a linkedlist 
 * listint_t list(safe version).
 * @head: A pointer to the head of linkedlist listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
size_t nodes, indx = 0;

nodes = loop_linked_list_int_length(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (indx = 0; indx < nodes; indx++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}
