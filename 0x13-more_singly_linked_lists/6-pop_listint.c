#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Pointer to the head of the list
 *
 * This function frees all the nodes in a listint_t linked list and sets the head to NULL.
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int num;

	if (*head == NULL)
		return (0);

	h = *head;
	num  = h->n;
	*head = h->next;
	free(h);

	return (num);
}

