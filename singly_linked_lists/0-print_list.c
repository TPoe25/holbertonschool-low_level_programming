#include "lists.h"

/**
 * print_list - prints elements of list_t list
 * @h: parameter
 * Return: count
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;

		count++;
	}

	return (count);
}
