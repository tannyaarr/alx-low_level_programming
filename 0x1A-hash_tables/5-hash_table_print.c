#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
 * Return: if ht is NULL, print nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		if (current != NULL)
		{
			printf("[%lu]:", i);

			while (current != NULL)
			{
				printf(" ");
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				if (current != NULL)
					printf(",");
			}
			printf("\n");
		}
	}
}
