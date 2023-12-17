#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 *
 * @key: key argument.
 * @size: size of the array of the hash table.
 *
 * Return: index number for the key/value pair in the hash table array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
