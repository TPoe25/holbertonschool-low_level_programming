#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of linked list
 * @head: pointer
 * @index: int
 * Return: result
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *now = head;
	
	unsigned int list = 0;

	while (now != NULL)
	{
		if (list == index)
			return (now);

		now = now->next;
		list++;
	}

	return (NULL);
}
