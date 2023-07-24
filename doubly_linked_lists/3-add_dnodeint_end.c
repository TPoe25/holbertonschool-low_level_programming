#include "lists.h"

/**
 * add_dnodeint_end - adds new node to end
 * @head: double pointer
 * @n: int
 * Return: result
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		
		*head = node;
	}
	else
	{
		dlistint_t *now = *head;
		
		while (now->next != NULL)
			now = now->next;

		now->next = node;
		
		node->prev = now;
	}

	return (node);
}
