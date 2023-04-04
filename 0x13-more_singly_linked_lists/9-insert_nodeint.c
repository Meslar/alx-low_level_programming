#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node as stated.
 * @head: data type pointer the head
 * @idx: data type unsigned int index
 * @n: data type int
 * Return: new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tp_node, *new_node;
	unsigned int count = 0;

	if (head == NULL && *head == NULL)
		return (NULL);

	tp_node = *head;
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == 0)
			return (NULL);
		new_node->n = n;
		new_node->next = tp_node;
		*head = new_node;
		return (new_node);
	}
	while (tp_node)
	{
		if (count + 1 == idx)
		{
			new_node = malloc(sizeof(listint_t));

			if (new_node == 0)
				return (NULL);
			new_node->n = n;
			new_node->next = tp_node->next;
			tp_node->next = new_node;
			return (new_node);
		}
		tp_node = tmp_node->next;
		count++;
	}
	return (NULL);
}
