#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - adds a node at the end of a dlistint_t list
 * @head: head node
 * @n: node data
 * Return: address of the new node or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	new_node->prev = last;
	return (last);
}
