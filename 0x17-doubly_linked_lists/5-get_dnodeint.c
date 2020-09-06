#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list.
 * @head: pointer to head.
 * @index: ndex of the node.
 * Return: node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int counter = 0;

	node = head;
	while (node != NULL && counter <= index)
	{
		if (counter == index)
			return (node);
		node = node->next;
		counter++;
	}
	return (NULL);
}
