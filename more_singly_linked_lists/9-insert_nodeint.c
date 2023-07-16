#include "lists.h"

/**
 * get_node_at_index - entry
 * @head: head of list
 * @index: index
 * Return: Pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 0;
	listint_t *stream = *head;
	listint_t *newnode;

	if (idx == 0)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);

		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (stream != NULL)
	{
		if (num == idx - 1)
		{
			newnode = malloc(sizeof(listint_t));
			if (newnode == NULL)
				return (NULL);

			newnode->n = n;
			newnode->next = stream->next;
			stream->next = newnode;
			return (newnode);
		}
		num++;
		stream = stream->next;
	}
	return (NULL);
}	
