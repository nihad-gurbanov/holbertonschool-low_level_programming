#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * a specified index of a linked list.
 *
 * @head: start point of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int current_index;
	dlistint_t *current_node = *head;

	if (*head == NULL)
		return (-1);

	for (current_index = 0; current_node != NULL; current_index++)
	{
		if (index == 0)
		{
			if (current_node->next)
				current_node->next->prev = NULL;
			*head = current_node->next;
			free(current_node);
			return (1);
		}
		else if (current_index == index && current_node->next == NULL)
		{
			current_node->prev->next = current_node->next;
			free(current_node);
			return (1);
		}

		else if (current_index == index)
		{
			current_node->prev->next = current_node->next;
			current_node->next->prev = current_node->prev;
			free(current_node);
			return (1);
		}
		current_node = current_node->next;
	}
	return (-1);

}
