#include "lists.h"

/**
 * free_dlistint - frees list
 * @head - pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *now = head;
	dlistint_t *next;

	while (now != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}
}
