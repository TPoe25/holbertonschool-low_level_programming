#include "lists.h"

/**
 * add_dnodeint - adds new node to beginning of list
 * @head: double pointer
 * @n: int
 * Return: result
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = node;
	node->next = *head;

	*head = node;

	return (node);
}
