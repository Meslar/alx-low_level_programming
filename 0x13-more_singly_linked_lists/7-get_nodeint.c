#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node
 *
 * Return: The nth node of the list or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp_node = head;
	unsigned int count = 0;

	for (; temp_node && count < index; count++)
	{
		temp_node = temp_node->next;
	}
	return (temp_node);
}
