#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of the array
 * Return: result
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);

	/* allocates memory for hash table struture */

	table = malloc(sizeof(hash_table_t));
	
	if (table == NULL)
		return (NULL);

	/* allocates memory for array of nodes  */

	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	
	/* initalizes size of hash table and sets to size  */

	table->size = size;

	return (table);
}
