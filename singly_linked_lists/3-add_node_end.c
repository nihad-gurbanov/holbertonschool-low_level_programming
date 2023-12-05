#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated and saved in the new node
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!head || !str)
		return (NULL);


	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}

	return (new_node);
}

