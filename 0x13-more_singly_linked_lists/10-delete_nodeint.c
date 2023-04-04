#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node at an index.
 * @head: First node address.
 * @index: Position of the node to delete.
 * Return: (1) when successful, (-1) when failed.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (n = 0; n < index - 1; n++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
