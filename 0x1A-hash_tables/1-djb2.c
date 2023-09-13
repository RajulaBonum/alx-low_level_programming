#include "hash_tables.h"

/**
 * implementation of the djb2
 * @str - string used to generate the hash value
 *
 * Return value: Hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) +c; /* hash * 33 + c */
	}
	return (hash);
}
