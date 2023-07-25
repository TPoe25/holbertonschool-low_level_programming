#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key
 * @size: array of the hash table
 * Return: index at which the key/value pair is stored in array of hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* calculate table using djb2 */

	unsigned long int table = hash_djb2(key);

	/* calculate index using modulo w/ size */

	unsigned long int index = table % size;

	return (index);
}
