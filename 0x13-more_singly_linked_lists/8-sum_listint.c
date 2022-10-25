#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_listint - returns the summ of all the data(n) of a listint_t list
 * @head: list head node
 * Return sum of all n
 */
int sum_listint(listint_t *head)
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
