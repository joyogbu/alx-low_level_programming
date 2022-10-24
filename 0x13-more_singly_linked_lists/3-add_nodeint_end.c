#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the node head
 * @n: node element
 * Return: a pointer to the new nodevor NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	listint_t *tail = *head;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		/** *tail = new_node; **/
		return (*head);
		tail = new_node;
	}
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = new_node;
	tail = new_node;
	return (tail);
}
