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

	if (!head || !n)
		return (NULL);

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;
	return (*head);
}
