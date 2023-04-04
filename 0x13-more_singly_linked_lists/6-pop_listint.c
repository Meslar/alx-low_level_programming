#include "lists.h"

/**
 * * pop_listint - Deletes the head node of a listint_t linked list
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Pointer to the head of the list
 *
 * Return: The head node's data (n)
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

