#include "lists.h"

/**
 * sum_dlistint - returns sum of data of list
 * @head: pointer
 * Return: result
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *now = head;

	while (now != NULL)
	{
		sum += now->n;
		now = now->next;
	}

	return (sum);
}
