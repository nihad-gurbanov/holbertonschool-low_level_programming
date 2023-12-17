#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table to add or update the key/value to.
 * @key: key, can not be empty string.
 * @value: associated with thekey, can be empty.
 *
 * Return: Success 1, Fail 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node;
	hash_node_t *new_node;

	if (!ht || !key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	if (!value)
		value = NULL;
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			if (current_node->value)
				free(current_node->value);
			current_node->value = (value) ? strdup(value) : NULL;
			return (1);
		}
		current_node = current_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->value = (value) ? strdup(value) : NULL;
	new_node->key = strdup(key);
	if (!new_node->key || (value && !new_node->value))
	{
		free(new_node->value);
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
