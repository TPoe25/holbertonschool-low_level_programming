#include "hash_tables.h"

/**
 * hash_djb2 - writes a hash function implementing djb2 algorithm
 * @str: char string
 * Return: result
 **/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/* initalizes a variable hash to inital value of 5381 */

	hash = 5381;
	while ((c = *str++))
	{
		/* function iterates through each character of input and assigns it to c  */

		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
