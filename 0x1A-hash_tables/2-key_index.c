#include "hash_tables.h"

/*
 * gives the index to a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long node;
	int index;

	node = hash_djb2(key);
	index = node % size;
	return (index);
}
