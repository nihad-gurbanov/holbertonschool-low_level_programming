#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len returns the number of elements in a linked list_t list
 * @h: pointer to list_t type linked list
 *
 * Return: number of elements in h linked list
 */


size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);

}
