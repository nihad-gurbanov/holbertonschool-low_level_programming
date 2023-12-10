#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - computes the sum of all the data (n)
 * in a dlistint_t linked list.
 * @head: pointer to the first node of the list
 * Return: sum of all data in the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		dlistint_t *current_node = head;

		while (current_node != NULL)
		{
			sum += current_node->n;
			current_node = current_node->next;
		}

		return (sum);
	}
	return (0);
}
