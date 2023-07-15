#include "lists.h"

/**
 * list_len - lists number of elements in a linked list_t list
 * @h: list_t pointer
 * Return: the count of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
