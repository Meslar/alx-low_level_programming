#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: data type listint_t double pointer of head
 * Return:  The address of the node, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first_l = head;
	listint_t *second_l = head;

	if (head == NULL)
		return  (NULL);
	if (head == head->next)
		return (head);
	while (first_l)
	{
		first_l = first_l->next;
		second_l = head;
		while (first_l && second_l != first_l)
		{
			if (second_l == first_l->next)
			{
				return (second_l);
			}
			second_l = second_l->next;
		}
	}
	return (first_l);
}
