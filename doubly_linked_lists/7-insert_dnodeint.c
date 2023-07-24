#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: double pointer
 * @idx: int
 * @n: int
 * Return: result
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *now;
	unsigned int list = 0;

	if (h == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = node;
		node->next = *h;
		*h = node;
		return (node);
	}
	
	now = *h;
	while (now != NULL && list < idx - 1)
	{
		now = now->next;
		list++;
	}

	if (now == NULL || list < idx - 1)
	{
		free(node);
		return (NULL);
	}

	node->prev = now;
	node->next = now->next;
	if (now->next != NULL)
		now->next->prev = node;
	now->next = node;

	return (node);
}
