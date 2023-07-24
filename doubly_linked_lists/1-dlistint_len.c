#include "lists.h"

/**
 * dlistint_len - prints the number of elements in list
 * @h: pointer
 * Return: result
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t list = 0;
	const dlistint_t *now = h;

	while (now != NULL)
	{
		list++;
		now = now->next;
	}

	return (list);
}
