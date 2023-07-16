#include "lists.h"

/**
 * pop_listint - deletes the head node and returns info
 * @head: head of list
 * Return: info of deleted head node
 */

int pop_listint(listint_t **head)
{
	int info;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	info = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (info);
}
