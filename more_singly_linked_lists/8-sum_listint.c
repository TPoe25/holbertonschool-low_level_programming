#include "lists.h"

/**
 * sum_listint - returns sum of data
 * @head: pointers to the head of the list
 * Return: result
 */


int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *now = head;

	while (now != NULL)
	{
		result += now->n;
		now = now->next;
	}
	return (result);
}
