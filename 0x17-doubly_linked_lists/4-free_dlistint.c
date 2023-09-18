#include "lists.h"
/**
 * free_dlistint - Function fress a list
 * @head: Pointer to the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;

while (head)
{
current = head;
head = head->next;
free(current);
}

}