#include "lists.h"

/**
 * reverse_listint - function reverses a linked list listint_t
 * @head: pointer to the first node in the linked list
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_node = NULL;
listint_t *next_node = NULL;

while (*head)
{
next_node = (*head)->next;
(*head)->next = prev_node;
prev_node = *head;
*head = next_node;
}

*head = prev_node;

return (*head);
}
