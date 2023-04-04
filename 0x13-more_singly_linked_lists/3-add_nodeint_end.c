#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head node of the list.
 * @n: The integer value to store in the new node.
 *
 * Return: If memory allocation fails or head is NULL, NULL.
 *         Otherwise, the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;

	if (!head)
		return (NULL);

	h = malloc(sizeof(listint_t));
	if (!h)
		return (NULL);

	h->n = n
		h->next = NULL;

	if (!*head)
		*head = h;
	else
	{
		listint_t *last_node = *head;
		while (last_node->next)
			last_node = last_node->next;

		last_node->next + h;
	}

	return (h);
}

