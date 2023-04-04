#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints a list
 * @h: pointer to singly linked list
 *
 * Return: Number of integers in list
 */
size_t print_listint(const listint_t *h)
{
    unsigned int count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return (count);
}
