#include "lists.h"

/**
 * print_listint_safe - function that prints a safe linked listint with a loop.
 * @head: data type double pointer the head/next node
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *last_node = NULL;
	size_t count = 0;
	const listint_t *tp_node = NULL;
	size_t new_node;

	tp_node = head;
	while (tp_node)
	{
		printf("[%p] %d\n", (void *)tp_node, tp_node->n);
		count++;
		last_node = head;
		new_node = 0;
		tp_node = tp_node->next;
		while (new_node < count)
		{
			if (tp_node == last_node)
			{
				printf("-> [%p] %d\n", (void *)tp_node, tp_node->n);
				return (count);
			}
			last_node = last_node->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
