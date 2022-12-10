#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to h0node head
 * @idx: new node index position
 * @n: data item
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	unsigned int i;

	i = 0;
	temp = *h;
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*h == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (*h);
	}
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = *h;
		*h = new_node;
		return (new_node);
	}
	/*if (idx == 1)
	{
		return (add_dnodeint(h, n));
	}*/
	for (i = 0; temp != NULL && i < idx - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
	{
		temp->next->prev = new_node;
	}
	temp->next = new_node;
	return (new_node);
}
