#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
