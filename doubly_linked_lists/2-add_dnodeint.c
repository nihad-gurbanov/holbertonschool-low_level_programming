#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: pointer to new head node
 * @n: integer input for new node's value
 *
 * Return: Address of new node or null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node)
	{
		new_node->n = n;

	if (!*head)
	{
		new_node->prev = NULL;
		new_node->next = *head;
	}
	else
	{
		new_node->prev = NULL;
		new_node->next = *head;
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (*head);
	}

	return (NULL);
}
