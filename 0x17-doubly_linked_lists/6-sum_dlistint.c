#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * sum_dlistint - sums all the data in a dlistint_t list
 * @head: head node
 * Return: summ of all node data
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
