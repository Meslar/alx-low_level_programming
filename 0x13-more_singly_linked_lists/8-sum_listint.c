#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a linked list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data (n) of the list or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *h_node;
	int sum;

	sum = 0;

	if (!head)
		return (0);

	h_node = head;
	while (h_node)
	{
		sum += h_node->n;
		h_node = h_node->next;
	}
	return (sum);
}
