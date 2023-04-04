#include "lists.h"
#include <stddef.h>

/**
 * listint_len
 * @h: pointer to singly linked list
 *
 * Return: Integer element
 */
size_t listint_len(const listint *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count)
}
