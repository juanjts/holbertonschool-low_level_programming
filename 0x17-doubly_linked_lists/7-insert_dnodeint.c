#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at given position.
 * @h: pointer to head.
 * @idx: index.
 * @n: data of node.
 * Return: address.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int i = 0;

	if (tmp == NULL || idx == 0)
		return (add_dnodeint(h, n));
	if (tmp->next == NULL && idx == 1)
		return (add_dnodeint_end(h, n));
	if (tmp->next == NULL && idx > 1)
		return (NULL);
	while (idx != 0)
	{
		tmp = tmp->next;
		idx--;
		i = idx;
		if (tmp->next == NULL && (idx - 1) == 0)
			return (add_dnodeint_end(h, n));
		if (tmp->next == NULL && (i - 1) > 0)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp->prev->next = new;
	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev = new;
	return (new);
}
