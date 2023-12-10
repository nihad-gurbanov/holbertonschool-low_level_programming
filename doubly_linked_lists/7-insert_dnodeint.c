#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to the given doubly linked list.
 * @index: index where the new node should be inserted.
 * @value: the value of the new node.
 *
 * Return: modified doubly linked list.
 */

dlistint_t *insert_dnodeint_at_index(
		dlistint_t **head,
		unsigned int index,
		int value)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current_node = *head;
	unsigned int i = 0;

	if (new_node)
	{
		new_node->n = value;

		if (index == 0)
		{
			if (*head)
				new_node->next = *head, (*head)->prev = new_node;
			*head = new_node;
			return (new_node);
		}

		while (i < index - 1 && current_node)
			current_node = current_node->next, i++;

		if (current_node)
		{
			if (current_node->next)
				current_node->next->prev = new_node;
			new_node->next = current_node->next;
			new_node->prev = current_node;
			current_node->next = new_node;

			return (new_node);
		}
	}
	return (NULL);
}
