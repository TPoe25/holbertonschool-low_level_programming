#include "hash_tables.h"

/**
 * hash_table_print - function that prints hash table
 * @ht: hashtable
 **/
void hash_table_print(const hash_table_t *ht)
{
	int i;

	if (ht == NULL)

		return;

	printf("\nHash Table\n-------------------\n");

	for (i = 0; i < (int)ht->size; i++)
	{
		hash_node_t *node = ht->array[i];
		while (node)
		{
			printf("Index:%d, Key:%s, Value:%s\n", i, node->key, node->value);
			node = node->next;
		}
	}
	printf("-------------------\n\n");
}
