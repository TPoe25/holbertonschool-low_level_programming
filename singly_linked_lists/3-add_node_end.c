#include "lists.h"

/**
 * add_node_end - adds a new note at the end of a list_t list
 * @head: input
 * @str: input
 * Return: new node
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *str = *head;
		
		while (str->next != NULL)
		{
			str = str->next;
		}
		str->next = new_node;
	}

	return (new_node);

}
