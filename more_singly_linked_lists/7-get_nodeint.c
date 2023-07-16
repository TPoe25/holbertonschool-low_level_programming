#include "lists.h"

/**
 * get_node_at_index - returns the nth node of a linked list
 * @head: head of list
 * @index: index of node
 * Return: now
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *now = head;

	while (now != NULL)
	{
		if (num == index)
			return (now);

		num++;
		now = now->next;

	}

	return (NULL);
}
