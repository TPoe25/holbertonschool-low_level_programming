#include "lists.h"

/**
 * add_nodeint - adds new node
 * @head: head of list
 * @n: new node
 * Return: result
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
