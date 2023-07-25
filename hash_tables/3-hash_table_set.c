#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: table
 * @key: key
 * @value: char
 * Return: result
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *now;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* calculates index for key */
	index = key_index((unsigned char *)key, ht->size);

	/* checks if collision at index */
	now = ht->array[index];

	while (now != NULL) {
		/* updates value if key exists */
		if (strcmp(now->key, key) == 0) {
			free(now->value);
			now->value = strdup(value);

			if (now->value == NULL)
				return (0);
			return (1);
		}
		now = now->next;
	}
	/* creates new node and sets value */
	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);

	node->key = strdup(key);

	if (node->key == NULL) {
		free(node);
		return (0);
	}

	node->value = strdup(value);

	if (node->value == NULL) {
		free(node->key);
		free(node);
		return (0);
	}
	/* add node to beginning of list at index */
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
