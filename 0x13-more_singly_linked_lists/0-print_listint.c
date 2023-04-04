#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints a singly linked list
 * @h: pointer to head of singly linked list
 *
 * Return: Number of elements in list
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return (count);
}
