#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the list
 * @head: pointer to the head of linked list
 * @n: data of node
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_node = *head, *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node)
	{
		new_node->n = n;
		if (*head == NULL)
			*head = new_node;
		else
		{
			while (current_node->next != NULL)
				current_node = current_node->next;
			current_node->next = new_node;
			new_node->prev = current_node, new_node->next = NULL;
		}
		return (new_node);
	}
	return (NULL);
}

