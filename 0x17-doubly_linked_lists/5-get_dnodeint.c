#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t list
 * @head: head node
 * @index: index of the node to be returned
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current;

	current = head;
	if (index == 0)
		return (head);
	if (head == NULL)
		return (NULL);
	while (current)
	{
		if (count == index)
		{
			return (current);
		}
		count = count + 1;
		current = current->next;
	}
	return (current);
}
