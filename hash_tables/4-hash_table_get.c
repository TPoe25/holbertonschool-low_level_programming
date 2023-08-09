#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value assc with a key
 * @ht: hash table
 * @key: key
 * Return: result
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *now;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* calculates index for key  */

	index = key_index((const unsigned char *)key, ht->size);

	/* goes thru list at index to find key */

	now = ht->array[index];

	while (now != NULL)
	{
		/* compares string using strcmp  */

		if (strcmp(now->key, key) == 0)
			return (now->value);

		now = now->next;
	}

	return (NULL);
}
