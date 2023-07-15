#include "lists.h"

/**
 * listint_len - returns num of elements in a linked list.
 * @h: parameter
 * Return: elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elcount = 0;

	while (h != NULL)
	{
		elcount++;
		h = h->next;
	}
	return (elcount);
}
