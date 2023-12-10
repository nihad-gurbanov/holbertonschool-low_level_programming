#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @list_head: first node
 * @target_index: index of the desired node
 * Return: node at the given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	dlistint_t *current_node = malloc(sizeof(dlistint_t));

	if (current_node)
	{
		current_node = head;
		while (current_node != NULL)
		{
			if (current_index == index)
				return (current_node);
			current_index++;
			current_node = current_node->next;
		}
	}
	return (NULL);
}
