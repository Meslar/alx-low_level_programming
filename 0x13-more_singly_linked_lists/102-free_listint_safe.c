#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to the first node in the linked list
 *
 * Return: size of the freed list
 */

size_t free_listint_safe(listint_t **head)
{
	size_t len = 0;
	int diff;
	listint_t *tp;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		diff = *head - (*head)->next;
		if (diff > 0)
		{
			tp = (*head)->next;
			free(*head);
			*head = tp;
			len++;
		}
		else
		{
			free(*head);
			*head = NULL;
			len++;
			break;
		}
	}

	*head = NULL;

	return (len);
}

