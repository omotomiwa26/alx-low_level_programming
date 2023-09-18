#include "lists.h"
/**
 *delete_dnodeint_at_index - Function deletes a node at the given index
 **@head: double pointer to the list
 *@index: integer index to delete the node
 *Return: 1 - if sucessful
 *Else: -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current, *node_to_delete;
	unsigned int current_index;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	current = *head;
	current_index = 0;

	while (current_index < index - 1 && current)
	{
		current = current->next;
		current_index++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	node_to_delete = current->next;
	current->next = node_to_delete->next;

	if (node_to_delete->next)
	{
		node_to_delete->next->prev = current;
	}
	free(node_to_delete);

	return (1);
}
