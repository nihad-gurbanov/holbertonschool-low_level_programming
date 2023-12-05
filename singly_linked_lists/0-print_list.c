#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of list_t type list
 *
 * @h pointer to singly linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			h = h->next;
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
			h = h->next;
		}
	}

	return (i);
}

