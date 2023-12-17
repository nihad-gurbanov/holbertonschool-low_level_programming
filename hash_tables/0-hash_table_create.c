#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * hash_table_create - creates a hash table.
 *
 * @size: size of the array.
 *
 * Return: a pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
