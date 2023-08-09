#include "hash_tables.h"
/**
 * hash_table_print - function that prints hash table
 * @ht: hashtable
 **/
void hash_table_print(const hash_table_t *ht)
{
	int i, comma = 0;
	
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < (int)ht->size; i++)
	{
		hash_node_t *node = ht->array[i];
		while (node)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			comma = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
