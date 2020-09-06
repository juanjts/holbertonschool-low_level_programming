#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function to add new node.
 * @head: pointer tu strct.
 * @n: date of node.
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
		*head = new;
		new->n = n;
	return (new);
}
