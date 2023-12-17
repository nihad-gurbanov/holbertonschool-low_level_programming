#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: is hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int printed_pairs = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (printed_pairs > 0)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			printed_pairs++;
			current = current->next;
		}
	}
	printf("}\n");
}

