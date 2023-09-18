#include "lists.h"
/**
 *sum_dlistint - Function returns the sum of all elements in the list
 *@head: Pointer to the list
 *Return: Sum
 *Else: 0
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
