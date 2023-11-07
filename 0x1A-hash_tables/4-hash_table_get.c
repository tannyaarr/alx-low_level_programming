#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table you want look into
 * @key: is the key you are looking for
 * Returns: the value associated with the element
 * or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index = key_index
		((unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
	}

	return (NULL);
}
