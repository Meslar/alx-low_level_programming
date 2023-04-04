#include "lists.h"
#include <stddef.h>

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: pointer to head of singly linked list
 *
 * Return: Number of elements in list
 */
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
