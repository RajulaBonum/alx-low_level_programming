#include "hash_tables.h"
/**
 * hash table
 * hash code for keys
 * duplicate values
 * Return 1 on success and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	unsigned int node;
	node = hash_djb2(key);
	int index;
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			current->value = strdup(value);
		}
		current = current->next;
	}
	return (1);
}

