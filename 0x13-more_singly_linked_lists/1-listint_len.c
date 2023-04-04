#include "lists.h"

/**
 * listint_len - Find the number of elements.
 * @h: Pointer to a singly linked list.
 * Return: Integer elements.
 **/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
