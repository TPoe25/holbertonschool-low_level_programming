#include "lists.h"

/**
 * print_dlistint - prints elements of dlistint_t list
 * @h: pointer to head of doubly linked list
 * Return: # of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t list = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		list++;
	}

	return (list);
}
