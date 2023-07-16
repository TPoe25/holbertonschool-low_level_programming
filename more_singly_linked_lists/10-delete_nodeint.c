#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: paramater
 * @index: paramater
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *stream, *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	stream = *head;

	while (stream != NULL && num < index - 1)
	{
		stream = stream->next;
		num++;
	}

	if (stream == NULL || stream->next == NULL)
		return (-1);

	temp = stream->next;
	stream->next = stream->next->next;
	free(temp);
	return (1);
}
