#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *h, *h1;

	h = head;
	while (h != NULL)
	{
		h1 = h->next;
		free(h);
		h = h1;
	}
}
