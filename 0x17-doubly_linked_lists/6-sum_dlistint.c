#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) of a linked list
 * @head: pointer to head.
 * Return: total sum of data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
