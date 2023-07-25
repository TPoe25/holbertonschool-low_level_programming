#include "hash_tables.h"

/**
 * hash_table_print - function that prints hash table
 * @ht: hashtable
 **/

void hash_table_print(const hash_table_t *ht)
{
	int i;

	printf("\nHash Table\n-------------------\n");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->items[i])
		{
			printf("Index:%d, Key:%s, Value:%s\n", i table->items[i] -> key, table->items[i]->value;
		}
	}

	printf("-------------------\n\n");
}
